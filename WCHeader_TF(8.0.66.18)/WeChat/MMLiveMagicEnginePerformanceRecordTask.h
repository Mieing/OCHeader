@class MMLiveMagicEnginePerformanceRecord, NSString, NSMutableArray, MMLiveMetricsInfoRecordInfo;

@interface MMLiveMagicEnginePerformanceRecordTask : NSObject

@property (retain, nonatomic) NSString *giftName;
@property (retain, nonatomic) NSString *productId;
@property (retain, nonatomic) NSMutableArray *recentPlaySceneRecordList;
@property (retain, nonatomic) NSMutableArray *recentEditorSceneRecordList;
@property (retain, nonatomic) MMLiveMagicEnginePerformanceRecord *currPerformanceRecord;
@property (nonatomic) unsigned long long currentRecordScene;
@property (retain, nonatomic) MMLiveMetricsInfoRecordInfo *baseMetricsRecord;
@property (nonatomic) BOOL recordMemoryIncrease;
@property (copy, nonatomic) id /* block */ onPerformanceRecordScencChangeCallback;
@property (retain, nonatomic) MMLiveMagicEnginePerformanceRecord *playMedianMemoryIncreaseRecord;
@property (retain, nonatomic) MMLiveMagicEnginePerformanceRecord *playMedianCPUIncreaseRecord;
@property (retain, nonatomic) MMLiveMagicEnginePerformanceRecord *playMedianGPUIncreaseRecord;
@property (retain, nonatomic) MMLiveMagicEnginePerformanceRecord *editorMedianMemoryIncreaseRecord;
@property (retain, nonatomic) MMLiveMagicEnginePerformanceRecord *editorMedianCPUIncreaseRecord;
@property (retain, nonatomic) MMLiveMagicEnginePerformanceRecord *editorMedianGPUIncreaseRecord;

- (id)initWithGiftName:(id)a0 productId:(id)a1;
- (void)initDefaultData;
- (BOOL)startPerformanceRecord:(unsigned long long)a0 withBaseMetrics:(id)a1;
- (BOOL)stopPerformanceRecord:(unsigned long long)a0;
- (BOOL)cancelPerformanceRecord:(unsigned long long)a0;
- (void)recordPerformanceWithMetricsInfo:(id)a0;
- (void)tagRecordMemoryIncrease:(BOOL)a0;
- (void)extractMedianRecords;
- (void)extractMemoryIncreaseMedianRecord;
- (void)extractCPUIncreaseMedianRecord;
- (void)extractGPUIncreaseMedianRecord;
- (id)getPerformanceRecordArrFilterMemoryNullValue:(id)a0;
- (id)getPerformanceRecordArrFilterCPUNullValue:(id)a0;
- (id)getPerformanceRecordArrFilterGPUNullValue:(id)a0;
- (void)updateRecordScene:(unsigned long long)a0;
- (void)cacheCurrPerformanceRecord;
- (void)createCurrPerformanceRecordIfNeed;
- (id)description;
- (void).cxx_destruct;

@end
