@class NSString, TIMXSDKInstance, NSObject;
@protocol OS_dispatch_queue;

@interface TIMXConversationInfoExtManager : NSObject <TIMXStartUpTaskProtocol, TIMXConversationInfoExtUpdaterProtocol, TIMXInstanceScopeSingleton> {
    TIMXSDKInstance *_r;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *processQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)startUpOrder;
+ (void)startUpWithRootObject:(id)a0;

- (void)updateConversationCoreInfoExt:(id)a0 withExtDataArray:(id)a1 completion:(id /* block */)a2;
- (void)updateConversationSettingsInfoExt:(id)a0 withExtDataArray:(id)a1 completion:(id /* block */)a2;
- (void)updateExtDictionaryForConvCoreInfo:(id)a0 WithPBModel:(id)a1;
- (void)updateExtDictionaryForConvSettingsInfo:(id)a0 WithPBModel:(id)a1;
- (void)updateConversationsCoreInfoExt:(id)a0 keyArray:(id)a1 completion:(id /* block */)a2;
- (void)updateConversationsSettingsInfoExt:(id)a0 keyArray:(id)a1 completion:(id /* block */)a2;
- (void)reportConversationInfoExtIllegal:(id)a0 withExceptionType:(unsigned long long)a1 extTypeStr:(id)a2;
- (BOOL)conversationCoreInfoExtHasMigrated:(id)a0;
- (BOOL)conversationSettingsInfoExtHasMigrated:(id)a0;
- (void)migratedConversationCoreInfoExtArray:(id)a0 withConversationId:(id)a1;
- (void)migratedConversationSettingsInfoExtArray:(id)a0 withConversationId:(id)a1;
- (id)fetchCoreInfoExtDictionaryWithConversationId:(id)a0;
- (id)fetchSettingsInfoExtDictionaryWithConversationId:(id)a0;
- (id)getDBExtDictionaryWithExt:(id)a0 conversationId:(id)a1 extClass:(Class)a2;
- (void)processExtDictionaryForConvCoreInfo:(id)a0 withOldDBExtDictionary:(id)a1 completion:(id /* block */)a2;
- (void)processExtDictionaryForConvSettingsInfo:(id)a0 withOldDBExtDictionary:(id)a1 completion:(id /* block */)a2;
- (BOOL)updateExtDictionaryForConvCoreInfo:(id)a0 withUpdateByDataModel:(id)a1;
- (void)trackExtDataArrayUpdateCost:(id)a0 WithConversationId:(id)a1 extTypeStr:(id)a2;
- (BOOL)updateExtDictionaryForConvSettingsInfo:(id)a0 withUpdateByDataModel:(id)a1;
- (BOOL)shouldSampleWithRatio:(double)a0;
- (void)coverExtDictionary:(id)a0 dbExtDictionary:(id)a1 withPbModelExt:(id)a2 completion:(id /* block */)a3;
- (BOOL)updateExtDictionaryForConvCoreInfo:(id)a0 withUpdateByVersionModel:(id)a1;
- (void)reportConversationCoreInfoExt:(id)a0;
- (BOOL)updateExtDictionaryForConvSettingsInfo:(id)a0 withUpdateByVersionModel:(id)a1;
- (void)reportConversationSettingsInfoExt:(id)a0;
- (id)convertExtArrayToDictionary:(id)a0;
- (void)processExtDictionary:(id)a0 withNewDBExtDictionary:(id)a1 oldDBExtDictionary:(id)a2 newExtBlock:(id /* block */)a3 completion:(id /* block */)a4;
- (id)getSafeDBExtArrayWithArray:(id)a0;
- (void)fetchConvCoreInfoExtForConversationsSuccess:(id)a0 conversationIds:(id)a1 completion:(id /* block */)a2;
- (void)fetchConvSettingsInfoExtForConversationsSuccess:(id)a0 conversationIds:(id)a1 completion:(id /* block */)a2;
- (void)reportConversationInfoExt:(id)a0 withNotMatchExtKeyArray:(id)a1 extTypeStr:(id)a2 logID:(id)a3;
- (void)shouldReportConvInfoExt:(id)a0 lastTimeKey:(id)a1 completion:(id /* block */)a2;
- (id)getConvCoreInfoExtHasMigratedKey:(id)a0;
- (id)getConvSettingsInfoExtHasMigratedKey:(id)a0;
- (void)setConvInfoExtHasMigrated:(id)a0 withHasMigratedKey:(id)a1;
- (void)updateExtDictionary:(id)a0 dbExtDictionary:(id)a1 withUpdateByDataModel:(id)a2;
- (void)updateExtDictionary:(id)a0 dbExtDictionary:(id)a1 withUpdateByVersionModel:(id)a2;
- (id)getExtVersionDictWithUpdateByVersionModel:(id)a0;
- (void).cxx_destruct;
- (id)initWithRootObject:(id)a0;

@end
