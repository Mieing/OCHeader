@class AWEIMSkylightBizDataDirector, NSString, AWEIMOnlineContactContext, NSMutableSet, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue, IESIMHttpTask;

@interface AWEIMOnlineContactRequestAvatarListV3DataController : NSObject

@property (copy, nonatomic) NSString *innerRequestID;
@property (copy, nonatomic) NSString *requestID;
@property (copy, nonatomic) NSString *imprID;
@property (nonatomic) BOOL isFirstRequest;
@property (nonatomic) double lastRefreshTime;
@property (nonatomic) BOOL isProcessingRemoteData;
@property (retain, nonatomic) NSMutableSet *needExcludeUids;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) AWEIMOnlineContactContext *context;
@property (weak, nonatomic) id<IESIMHttpTask> httpTask;
@property (retain, nonatomic) AWEIMSkylightBizDataDirector *directorV2;
@property (retain, nonatomic) NSMutableDictionary *cellVMDict;
@property (copy, nonatomic) NSString *pageIdentifier;
@property (readonly, nonatomic) BOOL shouldHidden;
@property (copy, nonatomic) id /* block */ hiddenConditionsChangedBlock;

+ (id)excludeUids:(id)a0 inViewModelList:(id)a1;
+ (id)disrecommendUidList:(id)a0 disrecommendCidList:(id)a1 inViewModelList:(id)a2;

- (BOOL)enableFriendActive;
- (id)p_defaultContext;
- (void)trackWithPerformance:(id)a0 error:(id)a1;
- (void)p_handleSkylightContext:(id)a0 performance:(id)a1 error:(id)a2 completion:(id /* block */)a3;
- (void)p_trackFirstFrameCost:(double)a0;
- (void)clearCellVMWithNewResult:(id)a0;
- (void)p_refreshDict:(id)a0 withBlock:(id /* block */)a1 excludedList:(id)a2;
- (void)resetLastRefreshTime;
- (void)fetchSkylightSnapshotCompletionNew:(id /* block */)a0;
- (void)fetchSkylightSnapshotCompletion:(id /* block */)a0;
- (void)disrecommendUserAndTryAddBackupUserInViewModelDict:(id)a0 completion:(id /* block */)a1;
- (void)excluedUserAndAddBackupUserIfPossibleWithUid:(id)a0 inViewModelDict:(id)a1 completion:(id /* block */)a2;
- (void)resetLastRefreshTimeToNow;
- (id)cellViewModelWithModel:(id)a0;
- (id)allCellViewModel;
- (void).cxx_destruct;
- (id)init;
- (void)reset;
- (void)refreshWithCompletion:(id /* block */)a0;

@end
