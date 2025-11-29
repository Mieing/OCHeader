@class NSTimer, AWEAwemeModel, AWELivePreStreamInnerRoomDisplayManager, NSArray, NSString, IESLiveGCDTimer, NSDictionary, NSMutableArray, AWELivePreStreamInnerRoomCommentView, AWELivePreStreamContext, NSNumber, AWELivePreStreamInnerRoomCommentItemModel;

@interface AWELivePreStreamInnerRoomCommentConfig : NSObject <AWELivePreStreamInnerRoomDisplayConfigProtocol>

@property (retain, nonatomic) AWEAwemeModel *model;
@property (weak, nonatomic) AWELivePreStreamInnerRoomDisplayManager *displayManager;
@property (retain, nonatomic) NSTimer *showTimer;
@property (retain, nonatomic) IESLiveGCDTimer *startTimer;
@property (retain, nonatomic) AWELivePreStreamInnerRoomCommentView *contentView;
@property (retain, nonatomic) AWELivePreStreamInnerRoomCommentView *toContentView;
@property (copy, nonatomic) id /* block */ actionBlock;
@property (retain, nonatomic) AWELivePreStreamContext *context;
@property (nonatomic) BOOL receviceMsg;
@property (nonatomic) BOOL msgCanShow;
@property (nonatomic) BOOL isShowing;
@property (nonatomic) BOOL isFirstMsgShowing;
@property (retain, nonatomic) NSNumber *priority;
@property (nonatomic) long long commentShowCount;
@property (nonatomic) long long startCommentShow;
@property (retain, nonatomic) NSMutableArray *showedMsg;
@property (retain, nonatomic) NSArray *themeTopicList;
@property (copy, nonatomic) NSString *accessibilityText;
@property (retain, nonatomic) NSDictionary *countLimitConfig;
@property (retain, nonatomic) NSDictionary *showDuration;
@property (retain, nonatomic) AWELivePreStreamInnerRoomCommentItemModel *showingCommentItemModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewController_viewWillAppear;
- (id)initWithModel:(id)a0 displayManager:(id)a1 context:(id)a2;
- (void)onUserEnterLiveRoom;
- (void)startCountDownTimerIfNeeded:(id /* block */)a0;
- (void)handleMessage:(id)a0 actionBlock:(id /* block */)a1;
- (void)onUserQuitLiveRoom:(id)a0;
- (void)application_willEnterForeground;
- (void)application_WillResignActive;
- (void)viewController_viewDidDisAppear;
- (id)enterClickRoomParams;
- (void)trackCommentFinishShowEvent;
- (BOOL)canDisplayElementWithModel:(id)a0;
- (void)p_configCommentViewWithActionBlock:(id /* block */)a0;
- (void)stopTimerCountDown;
- (void)reStartTimerCountDown;
- (id)p_parseEmojiText:(id)a0;
- (id)p_parseCommentTime:(long long)a0;
- (void)p_showCommentMessageWithActionBlock:(id /* block */)a0 itemModel:(id)a1;
- (void)showLiveCommentWithActionBlock:(id /* block */)a0 containerView:(id)a1 itemModel:(id)a2;
- (void)p_configCommentViewWithChatIndex:(long long)a0 isTopic:(BOOL)a1;
- (void)dismissCommentViewWithActionBlock:(id /* block */)a0;
- (void)showFeatureCommentWithIndex:(long long)a0 actionBlock:(id /* block */)a1;
- (void)trackTopicCommentShowWithItem:(id)a0;
- (void)addMessageToFeatureCommentListWithMessage:(id)a0;
- (void)addMessageToTopicCommentListWithMessage:(id)a0;
- (void)p_changeFromContentView:(id)a0 toContentView:(id)a1 itemModel:(id)a2;
- (void).cxx_destruct;
- (void)invalidateTimer;
- (void)reset;
- (void)handleTap:(id)a0;

@end
