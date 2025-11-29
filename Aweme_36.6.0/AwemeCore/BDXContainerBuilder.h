@class BDXPreserveDataManager, NSString, NSDictionary;

@interface BDXContainerBuilder : NSObject <AWEUserMessage, BDXPreserveDataDelegate, BDXContianerBuilderProtocol>

@property (retain, nonatomic) BDXPreserveDataManager *preserveDataManager;
@property (nonatomic) BOOL isBroadcastingStatusChange;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSDictionary *preserveData;

- (void)didFinishFollowUser:(id)a0 status:(long long)a1 error:(id)a2;
- (void)didFinishUnFollowUser:(id)a0 status:(long long)a1 error:(id)a2;
- (void)__updateFollowPreserveDataWithUser:(id)a0 status:(long long)a1;
- (void)__updateDiggPreserveDataWithAwemeID:(id)a0 type:(long long)a1;
- (void)commentLikeActionNotification:(id)a0;
- (void)__updateCommentDiggPreserveDataWithAwemeID:(id)a0 cid:(id)a1 userDigged:(BOOL)a2 diggCount:(id)a3;
- (void)preserveDataDidUpdateWithType:(unsigned long long)a0 oldValue:(id)a1 newValue:(id)a2 currentData:(id)a3 isUpdate:(BOOL)a4;
- (void)__broadcastStatusUpdate:(id)a0;
- (void)__addObserverForFollowStatusWithOperation:(id)a0;
- (void)__addObserverForDiggStatusWithOperation:(id)a0;
- (void)__addObserverForCommentDiggStatusWithOperation:(id)a0;
- (void)__onAwemeDiggNotification:(id)a0;
- (void)setShouldOverridePreserveData:(BOOL)a0;
- (void)updateContainer:(id)a0 getDataType:(unsigned long long)a1;
- (void)__updatePreserveDataWithStatusType:(unsigned long long)a0 statusContext:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)updateContainer:(id)a0;

@end
