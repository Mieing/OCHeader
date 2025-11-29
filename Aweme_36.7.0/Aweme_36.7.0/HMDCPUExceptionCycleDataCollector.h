@class HMDCPUBinaryImageInfo, NSMutableDictionary, NSString, NSMutableSet, NSDictionary, NSMutableArray;

@interface HMDCPUExceptionCycleDataCollector : NSObject

@property (nonatomic) long long sampleCount;
@property (retain, nonatomic) NSMutableArray *collectInfo;
@property (retain, nonatomic) NSMutableDictionary *sceneDict;
@property (retain, nonatomic) NSMutableDictionary *customSceneDict;
@property (nonatomic) long long thermalSeriousState;
@property (nonatomic) int totalThreadCount;
@property (nonatomic) float totalCPUUsage;
@property (retain, nonatomic) NSMutableSet *imageNameSet;
@property (retain, nonatomic) NSMutableDictionary *imageCPUArchMap;
@property (nonatomic) BOOL isFindUserNode;
@property (nonatomic) BOOL hasLowPowerModel;
@property (copy, nonatomic) NSString *possibleScene;
@property (copy, nonatomic) NSDictionary *imageUUIDMap;
@property (retain, nonatomic) HMDCPUBinaryImageInfo *binaryInfo;
@property (nonatomic) long long startTime;
@property (nonatomic) long long endTime;
@property (nonatomic) float thresholdConfig;
@property (nonatomic) unsigned long long sampleDuration;
@property (nonatomic) unsigned long long maxTreeDepth;
@property (nonatomic) BOOL hasBinaryImage;
@property (nonatomic) BOOL enableCustomData;
@property (nonatomic) BOOL enableCustomFilters;

+ (id)fetchCurrenImageList;

- (void)fetchBasicEvnInfoWithRecord:(id)a0;
- (id)getMostScene:(id)a0;
- (void)preparImageUUIDMap;
- (void)pushOnceSampledInfo:(id)a0;
- (id)makeSummaryInExceptionCycle;
- (void)clearAllSampleInfo;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
