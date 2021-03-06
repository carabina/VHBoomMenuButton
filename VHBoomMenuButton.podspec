Pod::Spec.new do |s|
  s.name             = 'VHBoomMenuButton'
  s.version          = '0.0.2'
  s.summary          = 'A menu which can ... BOOM!'
  s.description      = <<-DESC
                       This is a menu-button whose sub buttons will boom to show.
                         DESC
  s.homepage         = 'https://github.com/Nightonke/VHBoomMenuButton'
  s.license          = 'MIT'
  s.author           = { 'Nightonke' => "2584541288@qq.com" } 
  s.source           = { :git => 'https://github.com/Nightonke/VHBoomMenuButton.git', :tag => '0.0.2' }
  s.platform         = :ios, '7.0'
  s.requires_arc     = true
  
  s.source_files     = 'VHBoomMenuButton/**/*.{h,m}' 
  s.frameworks        = 'UIKit'
end