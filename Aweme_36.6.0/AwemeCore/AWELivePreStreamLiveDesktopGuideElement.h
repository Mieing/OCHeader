@class NSDictionary, NSString;

@interface AWELivePreStreamLiveDesktopGuideElement : AWELiveBaseElement <AWEUGSceneDesktopChannelGuideEvadeProtocol, AWEUGDesktopChannelGuideMessage, AWELivePreStreamAlertPriorityProtocol, AWELiveCommonSceneMessage>

@property (retain, nonatomic) NSDictionary *message;
@property (nonatomic) BOOL hasEnterRoom;
@property (nonatomic) BOOL isShowing;
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
- (void)showComponentWithPitayaMessage:(id)a0;
- (void)streamPlayer_startToPlay;
- (void)showLiveAlertElementWithCompletion:(id /* block */)a0;
- (unsigned long long)elementConfig;
- (id)createRequestModel;
- (void)showDesktopLiveChannelGuide;
- (void)desktopChannelGuideAlreadyShowWithScene:(id)a0 enterFrom:(id)a1 guideType:(id)a2 extraParams:(id)a3;
- (id)elementView;
- (void).cxx_destruct;
- (unsigned long long)priority;
- (void)reset;
- (void)dealloc;
- (id)sceneType;

@end
