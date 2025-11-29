@class NSString;
@protocol IESLiveDIContext;

@interface AWELiveUgDesktopGuideServiceImpl : NSObject <IESLiveUgDesktopGuideService, AWEUGDesktopChannelGuideMessage, AWEUGSceneDesktopChannelGuideEvadeProtocol>

@property (weak, nonatomic) id<IESLiveDIContext> roomDIContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)desktopChannelGuideAlreadyShowWithScene:(id)a0 enterFrom:(id)a1 guideType:(id)a2 extraParams:(id)a3 config:(id)a4;
- (void)desktopChannelGuideShowFailedWithScene:(id)a0 enterFrom:(id)a1 guideType:(id)a2 error:(id)a3 extraParams:(id)a4;
- (void)desktopChannelGuideClickWithScene:(id)a0 enterFrom:(id)a1 guideType:(id)a2 clickTarget:(id)a3;
- (void)injectEvadeStrategy:(id)a0;
- (void)checkCanShowWithModel:(id)a0 completion:(id /* block */)a1;
- (void)p_executeRoomExitAction;
- (void)injectSceneDesktopChannelGuideStrategyWithScene:(id)a0 enterFrom:(id)a1;
- (void)canShowDesktopGuideWithSceneParams:(id)a0 completion:(id /* block */)a1;
- (void)preloadDesktopChannelGuideDataWithSceneParams:(id)a0 completion:(id /* block */)a1;
- (void)showDesktopChannelGuideViewWithSceneParams:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
