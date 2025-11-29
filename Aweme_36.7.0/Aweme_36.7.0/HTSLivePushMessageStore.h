@class HTSEventContext, NSDate, NSString, NSDictionary, NSMutableArray, HTSLiveRoomBottomMessage, NSObject, IESLiveComponentContext;
@protocol IESLiveURLSchemaHandler, IESLiveRankListModule, OS_dispatch_semaphore, IESLiveRoomService, IESLiveInternalRouter;

@interface HTSLivePushMessageStore : NSObject <HTSLiveMessageSubscriber, HTSLivePushMessageActions>

@property (retain, nonatomic) id<IESLiveInternalRouter> internalRouter;
@property (retain, nonatomic) NSMutableArray *pushMessageBuffer;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *lock;
@property (retain, nonatomic) NSDate *enterTime;
@property (retain, nonatomic) id<IESLiveURLSchemaHandler> schemaHandle;
@property (retain, nonatomic) id<IESLiveRankListModule> rankListModule;
@property (retain, nonatomic) IESLiveComponentContext *componentContext;
@property (retain, nonatomic) HTSEventContext *eventContext;
@property (retain, nonatomic) id<IESLiveRoomService> roomModel;
@property (nonatomic) BOOL showing;
@property (retain, nonatomic) HTSLiveRoomBottomMessage *currentShowPushMessage;
@property (retain, nonatomic) HTSLiveRoomBottomMessage *clickedPushMessage;
@property (retain, nonatomic) NSDictionary *trackParams;
@property (copy, nonatomic) NSString *toastString;
@property (copy, nonatomic) NSString *schemeUrl;
@property (copy, nonatomic) NSString *clickedFansclubMessage;
@property (nonatomic) BOOL showCommentView;
@property (nonatomic) BOOL showSharePanel;
@property (nonatomic) BOOL showGiftView;
@property (nonatomic) BOOL showTreasure;
@property (nonatomic) BOOL showChargeView;
@property (nonatomic) BOOL showDRedenvelope;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)filterMessage:(id)a0;
- (void)bindModel;
- (void)startNext;
- (id)p_dictionaryWithJsonString:(id)a0;
- (void)didUpdateRoom:(id)a0;
- (void)dispatchPushMessage:(id)a0;
- (id)initWithRoom:(id)a0 context:(id)a1 componentContext:(id)a2;
- (void)showPushMessageViewIfNeed;
- (void)fetchBackgroundImages:(id)a0 completion:(id /* block */)a1;
- (void)createAndSendFakePushMessage:(id)a0;
- (id)createFakePushMessage:(id)a0 content:(id)a1 settings:(id)a2;
- (BOOL)p_isBanlanceEnoughWithPrice:(unsigned long long)a0;
- (void)p_sendDefaultGift:(id)a0;
- (void)pr_trackShowFansclubPushMessage;
- (void).cxx_destruct;
- (BOOL)isAnchor;
- (void)dealloc;
- (void)setup;
- (void)messageReceived:(id)a0;

@end
