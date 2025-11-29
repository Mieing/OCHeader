@class ChatBotVoIPRoomInfo, ChatBotBlurImageView, ChatBotVoIPViewControllerContext, UIView, MiniTaskPanGestureHandler, UIImageView, NSString, MMUIButton, ChatBotBrandVoIPTalkingView;

@interface ChatBotBrandBaseVoIPViewController : MMUIViewController <ChatBotBrandVoIPTalkingViewDeleget, IChatBotVoIPExt>

@property (retain, nonatomic) ChatBotVoIPViewControllerContext *context;
@property (nonatomic) BOOL disableLeftPanGes;
@property (retain, nonatomic) MiniTaskPanGestureHandler *leftPanPopGestureHandler;
@property (retain, nonatomic) ChatBotBlurImageView *fakeMainFrameSnapshotView;
@property (retain, nonatomic) UIView *fakeSnapshotShadowView;
@property (retain, nonatomic) MMUIButton *fakeSnapshotMaskView;
@property (nonatomic) unsigned long long roomId;
@property (retain, nonatomic) UIImageView *backgroundView;
@property (retain, nonatomic) ChatBotVoIPRoomInfo *roomInfo;
@property (retain, nonatomic) ChatBotBrandVoIPTalkingView *talkingView;
@property (copy, nonatomic) id /* block */ takePhotoHandle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)multiTalkMgrDidClose;
- (void)UIManagerDidCloseCompletely;
- (id)init;
- (id)getRoomIdentifier;
- (void)dealloc;
- (unsigned long long)getRoomId;
- (void)fetchRoomInfo;
- (void)viewDidLoad;
- (void)initViews;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewDidLayoutSubviews;
- (void)layoutBackground;
- (void)initNavigationItems;
- (id)getTalkingView;
- (id)getBackgroundView;
- (void)layoutTalkingView;
- (id)genJoinRoomParams;
- (BOOL)needWelcomeEvent;
- (id)genWelcomeInfo;
- (void)joinRoom;
- (void)hangup;
- (void)checkNeedCaptureFrameDataToServer:(id /* block */)a0;
- (void)closeVCByCallEnd;
- (unsigned int)getChatbotVoIPScene;
- (int)getChatBotVoIPOpenScene;
- (void)interruptAISpeaking;
- (void)onTalkSuccWithRoomID:(unsigned long long)a0 openScene:(int)a1;
- (void)onCallEnd:(unsigned long long)a0;
- (BOOL)useTransparentNavibar;
- (BOOL)shouldInteractivePop;
- (BOOL)useBlackStatusbar;
- (BOOL)shouldNavigationBarAccessibilityHidden;
- (void)close;
- (double)getContentViewLayoutTop;
- (id)getAIByPassInfo;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)onChangeSpecialModel:(id)a0 modelName:(id)a1;
- (void).cxx_destruct;

@end
