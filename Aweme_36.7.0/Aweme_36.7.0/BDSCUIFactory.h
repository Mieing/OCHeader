@class NSMutableDictionary;

@interface BDSCUIFactory : NSObject

@property (retain, nonatomic) NSMutableDictionary *controlViewMap;
@property (retain, nonatomic) NSMutableDictionary *searchViewMap;
@property (retain, nonatomic) NSMutableDictionary *clarityViewMap;
@property (retain, nonatomic) NSMutableDictionary *floatBallMap;
@property (retain, nonatomic) NSMutableDictionary *uiConfigMap;
@property (retain, nonatomic) NSMutableDictionary *uiV2ViewMap;
@property (retain, nonatomic) NSMutableDictionary *airPlayGuideViewMap;

+ (id)sharedFactory;

- (void)registerWithSearchViewType:(unsigned long long)a0 Class:(Class)a1;
- (void)registerWithPortraitCastSettingViewType:(unsigned long long)a0 Class:(Class)a1;
- (void)registerWithPortraitResolutionViewType:(unsigned long long)a0 Class:(Class)a1;
- (void)registerWithPortraitSpeedViewType:(unsigned long long)a0 Class:(Class)a1;
- (void)registerWithClarityViewType:(unsigned long long)a0 Class:(Class)a1;
- (void)registerWithControlViewType:(unsigned long long)a0 Class:(Class)a1;
- (Class)getSearchViewWithType:(unsigned long long)a0;
- (Class)getControlViewClassWithType:(unsigned long long)a0;
- (Class)getClarityViewWithType:(unsigned long long)a0;
- (Class)getPortraitCastSettingViewClassWithType:(unsigned long long)a0;
- (Class)getLandscapeCastSettingViewClassWithType:(unsigned long long)a0;
- (Class)getPortraitSpeedViewClassWithType:(unsigned long long)a0;
- (Class)getLandscapeSpeedViewClassWithType:(unsigned long long)a0;
- (Class)getPortraitResolutionViewClassWithType:(unsigned long long)a0;
- (Class)getLandscapeResolutionViewClassWithType:(unsigned long long)a0;
- (Class)getAirPlayMirrorGuideViewWithType:(unsigned long long)a0;
- (Class)getFloatBallWithType:(unsigned long long)a0;
- (void)loadViewMap;
- (void)registerWithLandscapeCastSettingViewType:(unsigned long long)a0 Class:(Class)a1;
- (void)registerWithLandscapeResolutionViewType:(unsigned long long)a0 Class:(Class)a1;
- (void)registerWithLandscapeSpeedViewType:(unsigned long long)a0 Class:(Class)a1;
- (Class)getUIConfigWithType:(unsigned long long)a0;
- (void)registerWithUIConfigType:(unsigned long long)a0 Class:(Class)a1;
- (void)registerWithFloatBallType:(unsigned long long)a0 Class:(Class)a1;
- (void)registerWithAirPlayMirrorGuideType:(unsigned long long)a0 Class:(Class)a1;
- (void).cxx_destruct;

@end
