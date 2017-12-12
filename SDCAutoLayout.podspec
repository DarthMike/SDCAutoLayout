Pod::Spec.new do |s|
  s.name         = 'SDCAutoLayout'
  s.version      = '2.0.3'
  s.license      = { :type => 'MIT', :file => 'LICENSE' }
  s.authors      = { 'Scott Berrevoets' => 's.berrevoets@me.com' }
  s.summary      = 'A UIView category that simplifies dealing with Auto Layout'
  s.homepage	 = 'https://github.com/sberrevoets/SDCAutoLayout'

# Source Info
  s.platform     =  :ios, '6.0'
  s.source       =  { :git => 'https://github.com/sberrevoets/SDCAutoLayout.git', :tag => "v#{s.version}" }
  s.source_files = 'AutoLayout/UIView+SDCAutoLayout.{h,m}'
  s.public_header_files = 'Autolayout/UIView+SDKAutolayout.h'
  s.requires_arc = true
  
# Pod Dependencies

end
