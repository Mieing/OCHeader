@class HTSEventContext, NSString, HTSLiveApi, NSMutableArray;
@protocol IESLiveRoomService, IESLivePinCommentReaction;

@interface IESLivePinCommentStore : NSObject <HTSLiveMessageSubscriber, HTSLiveRoomRemoteActions, IESLiveDataSyncDelegate, IESLivePinCommentNodeDelegate>

@property (retain, nonatomic) NSMutableArray *nodes;
@property (retain, nonatomic) NSMutableArray *timeoutNodes;
@property (retain, nonatomic) HTSLiveApi *api;
@property (retain, nonatomic) id<IESLiveRoomService> roomModel;
@property (retain, nonatomic) HTSEventContext *trackContext;
@property (nonatomic) BOOL isAnchor;
@property (weak, nonatomic) id<IESLivePinCommentReaction> reaction;
@property (nonatomic) BOOL enableEmphasisArea;
@property (nonatomic) BOOL isGameingForAndroid;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)subscribedSyncDataWithValue:(id)a0 version:(long long)a1;
- (void)subscribedSyncDataUpdatedWithValue:(id)a0 oldVersion:(long long)a1 newVersion:(long long)a2;
- (void)handleHighlightContainerSyncData:(id)a0;
- (id)initWithRoomModel:(id)a0 diContext:(id)a1;
- (void)updateNode:(id)a0 withHighlightItem:(id)a1;
- (BOOL)isDuplicateNode:(id)a0 withOtherNode:(id)a1;
- (BOOL)isValidPinNode:(id)a0;
- (BOOL)isValidHighlightItem:(id)a0;
- (void)checkNodesDisplayDuration;
- (BOOL)isSupportPinMessage:(id)a0;
- (BOOL)hasPinPrivilege:(unsigned long long)a0;
- (id)abilityWithNodeType:(unsigned long long)a0;
- (BOOL)isDuplicateNode:(id)a0;
- (BOOL)isValidNode:(id)a0;
- (void)pinCommentNode:(id)a0 finish:(id /* block */)a1;
- (void)unPinCommentNode:(id)a0 finish:(id /* block */)a1;
- (void)unPinAllCommentNodeWithFinish:(id /* block */)a0;
- (void)pinCommentNodeDisplayTimeout:(id)a0;
- (void)handleReviewMessage:(id)a0;
- (id)getNodeByNodeId:(id)a0;
- (void)removeTimeoutNodeId:(id)a0;
- (id)getItemNodeId:(id)a0;
- (void)trackAnchorReviewDurationWith:(id)a0;
- (id)abilityWithItem:(id)a0;
- (double)calculateDisplayDurationWithEndTime:(long long)a0;
- (void)setupPinCommon:(id)a0 forNode:(id)a1;
- (void)removeCheckedNodes;
- (void)p_unPinAllCommentNode:(id)a0 withFinish:(id /* block */)a1;
- (BOOL)isEmptyNode:(id)a0;
- (void)removeEmptyNodes;
- (void).cxx_destruct;
- (void)addNode:(id)a0;
- (void)setup;
- (void)removeNode:(id)a0;
- (void)messageReceived:(id)a0;

@end
