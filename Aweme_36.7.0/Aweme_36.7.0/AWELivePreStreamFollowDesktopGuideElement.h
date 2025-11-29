@class NSString, AWELivePreStreamDesktopGuideManager;

@interface AWELivePreStreamFollowDesktopGuideElement : AWELiveBaseElement <AWEUGSceneDesktopChannelGuideEvadeProtocol, AWEUGDesktopChannelGuideMessage, AWELivePreStreamAlertPriorityProtocol>

@property (retain, nonatomic) AWELivePreStreamDesktopGuideManager *guideManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)shouldActivateElement;

- (id)enterFrom;
- (void)initializeElement;
- (BOOL)shouldDesktopChannelGuideEvadeWithScene:(id)a0 enterFrom:(id)a1;
- (void)onUserQuitLiveRoom:(id)a0;
- (void)desktopChannelGuideShowFailedWithScene:(id)a0 enterFrom:(id)a1 guideType:(id)a2 error:(id)a3 extraParams:(id)a4;
- (void)onUserEnterLiveRoom:(id)a0;
- (void)preloadElement;
- (void)showLiveAlertElementWithCompletion:(id /* block */)a0;
- (unsigned long long)elementConfig;
- (void)showDesktopLiveChannelGuide;
- (void)desktopChannelGuideAlreadyShowWithScene:(id)a0 enterFrom:(id)a1 guideType:(id)a2 extraParams:(id)a3;
- (id)elementView;
- (void).cxx_destruct;
- (void)setData:(id)a0;
- (unsigned long long)priority;
- (void)dealloc;
- (id)sceneType;

@end
