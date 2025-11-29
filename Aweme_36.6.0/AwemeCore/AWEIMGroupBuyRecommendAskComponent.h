@class AWEIMMessage, NSDictionary, NSString;
@protocol IESIMHttpTask, IESIMBulletMessageProtocol;

@interface AWEIMGroupBuyRecommendAskComponent : AWEIMComponentBase <AWEIMGroupBuyRecommendAskActionService, AWEIMCustomQuoteAction, AWEIMInputVIewControllerAction>

@property (retain, nonatomic) AWEIMMessage<IESIMBulletMessageProtocol> *bulletMessage;
@property (nonatomic) BOOL hasFirstSend;
@property (copy, nonatomic) NSDictionary *extDict;
@property (copy, nonatomic) NSString *questionDesc;
@property (retain, nonatomic) id<IESIMHttpTask> bulletRequestTask;
@property (nonatomic) double firstSendMessageSec;
@property (nonatomic) BOOL needAsyncSendBulletMessage;
@property (copy, nonatomic) NSString *searchQuestionDesc;
@property (copy, nonatomic) NSDictionary *sendMessageParams;
@property (copy, nonatomic) NSDictionary *enterChatExtDict;
@property (copy, nonatomic) NSDictionary *searchExtDictToMessage;
@property (nonatomic) BOOL firstFrameOpt;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)hostVC_viewDidLoad;
- (void)componentDidMounted:(id)a0;
- (void)hostVC_viewDidAppear;
- (void)hostVC_viewDidAppearAndRender;
- (void)didSendTextMessage:(id)a0 userInfo:(id)a1;
- (void)p_viewDidAppear;
- (void)sendPoiProductMessage;
- (void)didExitCustomQuote:(long long)a0;
- (void)didClickCloseCustomQuoteBtn:(long long)a0;
- (void)__trackPresetContentAction:(BOOL)a0 isMatch:(BOOL)a1 withExt:(id)a2;
- (void)requestPoiInfo;
- (void)setupCustomQuoteMessage;
- (void)setupSearchQuestionToInput;
- (void)clearRecommendAskRouterParams;
- (void)requestBulletMessageWithParams:(id)a0;
- (BOOL)shouldAsyncSendBulletMessage;
- (void)clearSearchQuestionRouterParams;
- (void).cxx_destruct;
- (id)conversation;
- (id)hostController;
- (void)resetData;

@end
