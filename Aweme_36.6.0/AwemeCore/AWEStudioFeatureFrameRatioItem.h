@class NSString, NSMutableDictionary;

@interface AWEStudioFeatureFrameRatioItem : AWEStudioFeatureStatusBaseItem <AWEStudioFeatureFrameRatioItemProtocol>

@property (nonatomic) unsigned long long defaultRatio;
@property (retain, nonatomic) NSMutableDictionary *p_ratioToFrameDict;
@property (nonatomic) BOOL p_isSaving;
@property (nonatomic) BOOL p_isScheduledForSave;
@property (nonatomic) unsigned long long initialRatio;
@property (nonatomic) BOOL useInitialRatioFirstTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)p_saveToStorageNow;
- (void)p_executeSave;
- (id)initWithStorage:(id)a0 persistenceKey:(id)a1 defaultRatio:(unsigned long long)a2;
- (void)saveRatio:(unsigned long long)a0 forRecordModeID:(id)a1;
- (unsigned long long)ratioForRecordModeID:(id)a0;
- (void)loadInitilRatio;
- (void).cxx_destruct;

@end
