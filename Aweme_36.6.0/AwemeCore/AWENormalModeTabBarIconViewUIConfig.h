@class UIImage, NSString;

@interface AWENormalModeTabBarIconViewUIConfig : AWENormalModeTabBarInnerViewUIConfig <AWENormalModeTabBarInnerViewUIConfigLightModeProtocol>

@property (nonatomic) double lightModeProgress;
@property (nonatomic) double imageHeight;
@property (retain, nonatomic) UIImage *customNormalImage;
@property (retain, nonatomic) UIImage *customSelectedImage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateLightModeWithProgress:(double)a0;
- (void).cxx_destruct;

@end
