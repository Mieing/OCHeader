@class NSString, NSPointerArray, TIMXSDKInstance;

@interface TIMXDBConversationORMBatchUpdateManager : NSObject <TIMXInstanceScopeSingleton> {
    struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } _rwRuleLock;
    TIMXSDKInstance *_r;
}

@property (retain) NSString *userID;
@property (retain, nonatomic) NSPointerArray *rules;
@property (retain, nonatomic) NSPointerArray *needBatchUpdateDBRules;
@property (retain, nonatomic) NSPointerArray *relyConvSettingInfoChangedRules;
@property (retain, nonatomic) NSPointerArray *relyConvParticipantsChangedRules;
@property (retain, nonatomic) NSPointerArray *relyConvInfoChangedRules;
@property (retain, nonatomic) NSPointerArray *relyConvUnreadCountChangedRules;
@property (retain, nonatomic) NSPointerArray *relyConvLastMsgChangedRules;
@property (retain, nonatomic) NSPointerArray *relyConvBoxTypeMaskChangedRules;
@property (retain, nonatomic) NSPointerArray *relyConvLocalExtDictChangedRules;
@property (retain, nonatomic) NSPointerArray *relyConvCoreInfoChangedRules;
@property (retain, nonatomic) NSPointerArray *relyConvLastHintMsgChangedRules;
@property (retain, nonatomic) NSPointerArray *relyConvBotsChangedRules;
@property BOOL affectedBySwitchingBackground;
@property (nonatomic) BOOL hasLastMsgBatchUpdateDone;
@property (nonatomic) BOOL hasLastHintMsgBatchUpdateDone;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)loginWithUid:(id)a0;
- (void)updateConvWhenBoxTypeMaskChangedWithConv:(id)a0;
- (void)updateConvWhenConvInfoChangedWithConv:(id)a0;
- (void)updateConvWhenLocalExtDictChangedWithConv:(id)a0;
- (void)updateConvWhenConvParticipantsChangedWithConv:(id)a0;
- (void)updateConvWhenConvBotsChangedWithConv:(id)a0;
- (void)updateConvWhenConvUnreadCountChangedWithConv:(id)a0;
- (void)updateConvWhenConvLastHintMsgChangedWithConv:(id)a0;
- (void)updateConvWhenConvLastMsgChangedWithConv:(id)a0;
- (void)reportBatchUpdateInterruptedIfNeeded;
- (void)recordBatchUpdateStatus;
- (void)clearBatchUpdateStatus;
- (void)startDBConversationORMBatchUpdateTask;
- (void)__resetRules;
- (void)rdLock;
- (void)trackWithConvCount:(unsigned long long)a0 dbElapsedTimeDict:(id)a1 logger:(id)a2 needBatchUpdateDBRules:(id)a3 status:(unsigned long long)a4;
- (void)updateConvWhenConvSettingsInfoChangedWithConv:(id)a0;
- (void)updateConvWhenConvCoreInfoChangedWithConv:(id)a0;
- (void)unlock;
- (void).cxx_destruct;
- (void)addRule:(id)a0;
- (void)removeRule:(id)a0;
- (void)dealloc;
- (void)didEnterBackground:(id)a0;
- (id)initWithRootObject:(id)a0;
- (void)wrlock;

@end
