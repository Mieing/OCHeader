@class NSString, NSMutableSet, UIView, IESLiveDanmakuSettingsLandscapeConfiguration;
@protocol IESLiveDanmakuServiceInjectorDelegate;

@interface IESLiveDanmakuServiceImpl : IESLiveGeneralBaseService <IESLiveDanmakuService, IESLiveDanmakuServiceInjector>

@property (retain, nonatomic) IESLiveDanmakuSettingsLandscapeConfiguration *settingConfiguration;
@property (retain, nonatomic) NSMutableSet *danmakuContainerHiddenControlList;
@property (retain, nonatomic) UIView *danmakuContentView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<IESLiveDanmakuServiceInjectorDelegate> injectorDelegate;

+ (void)ieslivekit_register_generalServiceAction;
+ (BOOL)serviceShouldActive:(id)a0;
+ (id)serviceProtocolsWithParam:(id)a0;

- (void)serviceDidLaunch;
- (void)serviceUninstall;
- (void)serviceWillLaunchWithParam:(id)a0;
- (void)serviceRoomDataReady:(id)a0;
- (void)bindBaseDanmakuContentView:(id)a0;
- (void)unbindBaseDanmakuContentView;
- (void)addDanmakuWithMessage:(id)a0;
- (void)setDanmakuContentViewAlpha:(double)a0 withAnimation:(BOOL)a1 setSource:(id)a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })getBaseDanmakuFrameWithOrientation:(long long)a0;
- (void)enableShowDanmaku:(BOOL)a0 withSource:(id)a1;
- (long long)currentAreaType;
- (long long)currentFontSizeType;
- (long long)currentAlphaPercentValue;
- (BOOL)enableCarnivalDanmaku;
- (void).cxx_destruct;

@end
