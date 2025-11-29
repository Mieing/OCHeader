@class NSDictionary, NSMutableArray, NSString;
@protocol AnnieXCardModelProtocol;

@interface AnnieXPreserveDataManager : NSObject <AWEUserMessage, AnnieXPreserveDataManagerProtocol, AnnieXCardModelDelegateProtocol>

@property (copy) NSDictionary *innerPreservedData;
@property (weak, nonatomic) id<AnnieXCardModelProtocol> cardModel;
@property (retain, nonatomic) NSMutableArray *identifiers;
@property (nonatomic) BOOL isBroadcastingStatusChange;
@property (nonatomic) BOOL shouldOverridePreserveData;
@property (nonatomic) struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } innerDataLock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy) NSDictionary *preserveData;

+ (BOOL)enableCommentDiggFunction;

- (void)didFinishFollowUser:(id)a0 status:(long long)a1 error:(id)a2;
- (void)didFinishUnFollowUser:(id)a0 status:(long long)a1 error:(id)a2;
- (void)updateCardModel:(id)a0;
- (void)preserveDataDidChangeByFront:(id)a0;
- (void)__updateFollowPreserveDataWithUser:(id)a0 status:(long long)a1;
- (void)updatePreserveDataWithStatusType:(unsigned long long)a0 statusContext:(id)a1;
- (void)__updateDiggPreserveDataWithAwemeID:(id)a0 type:(long long)a1;
- (void)commentLikeActionNotification:(id)a0;
- (void)__updateCommentDiggPreserveDataWithAwemeID:(id)a0 cid:(id)a1 userDigged:(BOOL)a2 diggCount:(id)a3;
- (id)__preserveKeyWithType:(unsigned long long)a0;
- (id)__preserveIDWithType:(unsigned long long)a0;
- (void)__observePreserveDataChangedWithType:(unsigned long long)a0 newValue:(id)a1 currentData:(id)a2;
- (void)preserveDataDidUpdateWithType:(unsigned long long)a0 oldValue:(id)a1 newValue:(id)a2 currentData:(id)a3 isUpdate:(BOOL)a4;
- (void)__broadcastStatusUpdate:(id)a0;
- (void)__addObserverForFollowStatusWithOperation:(id)a0;
- (void)__addObserverForDiggStatusWithOperation:(id)a0;
- (void)__addObserverForCommentDiggStatusWithOperation:(id)a0;
- (void)__onAwemeDiggNotification:(id)a0;
- (void)updatePreserveDataWithDict:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
