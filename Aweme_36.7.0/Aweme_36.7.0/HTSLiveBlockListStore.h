@class HTSLiveUser, RACDisposable, HTSLiveUserAPI, HTSEventContext, NSString, NSMutableArray;
@protocol IESLiveRoomService, HTSLiveAdminListReactions;

@interface HTSLiveBlockListStore : NSObject <IESLiveAdminStoreIntegration>

@property (retain, nonatomic) HTSLiveUser *anchor;
@property (retain, nonatomic) RACDisposable *disposable;
@property (retain, nonatomic) HTSLiveUserAPI *userApi;
@property (retain, nonatomic) id<IESLiveRoomService> room;
@property (nonatomic) BOOL needKickoutSilenceInfo;
@property (retain, nonatomic) NSMutableArray *dataSource;
@property (retain, nonatomic) NSMutableArray *adminedUserInfos;
@property (nonatomic) long long total;
@property (nonatomic) long long max;
@property (nonatomic) BOOL hasMore;
@property (weak, nonatomic) id<HTSLiveAdminListReactions> reactionCommon;
@property (retain, nonatomic) HTSEventContext *eventContext;
@property (nonatomic) BOOL isNewStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (void)doAction:(id)a0 enterFromMerge:(id)a1 enterMethod:(id)a2;
- (void)unDoAction:(id)a0 enterFromMerge:(id)a1 enterMethod:(id)a2;
- (void)fetchUserList:(unsigned long long)a0;
- (void)viewShowOpportunity;
- (void)alertActionOpportunity:(id)a0 cancel:(BOOL)a1;
- (void)alertShowOpportunity:(id)a0 ensure:(BOOL)a1;
- (id)fillInTableView:(id)a0 WithCellAtIndexPath:(id)a1 isWhite:(BOOL)a2;
- (void)unDoAction:(id)a0;
- (id)dataSourceNewStyle;
- (BOOL)moreThere;
- (unsigned long long)actualLimitCount;
- (id)initWithAnchor:(id)a0 room:(id)a1;
- (void)fetchAdminOperationWithUser:(id)a0 completion:(id /* block */)a1;
- (unsigned long long)actualBlackCount;
- (void)kickoutUser:(id)a0;
- (long long)maxCount;
- (void).cxx_destruct;
- (long long)totalCount;
- (void)dealloc;
- (void)doAction:(id)a0;

@end
