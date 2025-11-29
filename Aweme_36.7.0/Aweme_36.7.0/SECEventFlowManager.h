@class NSDictionary, NSArray;

@interface SECEventFlowManager : NSObject

@property (copy, nonatomic) NSDictionary *flowDetectionConfig;
@property (copy, nonatomic) NSDictionary *labelDesc;
@property (copy, nonatomic) NSDictionary *sceneDesc;
@property (copy, nonatomic) NSDictionary *poolOption;
@property (copy, nonatomic) NSDictionary *trees;
@property (copy, nonatomic) NSArray *allScenes;
@property (nonatomic) BOOL uploadEnable;
@property (copy, nonatomic) NSDictionary *uploadSampleConfig;
@property (copy, nonatomic) NSDictionary *uploadCacheOption;
@property (copy, nonatomic) NSDictionary *uploadLogOption;
@property (copy, nonatomic) NSArray *labelsBlockList;
@property (copy, nonatomic) NSDictionary *interestEventConfig;
@property (copy, nonatomic) NSDictionary *perfSample;
@property (copy, nonatomic) NSDictionary *uploadSampleConfigWithCel;

+ (unsigned long long)eventFlowDetectionPackageVersionWithAccessKey:(id)a0;
+ (id)eventFlowDetectionPath;
+ (id)eventFlowDetectionChannel;
+ (id)shared;

- (unsigned long long)identifyAllSampleRate;
- (unsigned long long)poolSizeForEventSource:(id)a0;
- (id)latestLabelCollectDictForScene:(id)a0;
- (id)labelCelCollectDictForScene:(id)a0;
- (unsigned long long)identifySceneSampleRate;
- (id)logicTreeForSceneDetect:(id)a0;
- (unsigned long long)labelDescSampleRate;
- (id)eventTagCelsForEvent:(id)a0;
- (BOOL)uploadEnabled;
- (id)needParamsForEvent:(id)a0;
- (id)eventFlowAcceptLabels;
- (BOOL)isEventInterest:(id)a0;
- (unsigned long long)sampleRateForType:(id)a0;
- (unsigned long long)uploadLogSize;
- (id)uploadLogSampleRateConfigWithCel;
- (unsigned long long)initialLoadSampleRate;
- (void)setupWithEventUploadConfig:(id)a0;
- (void)setupWithEventFlowDetectionConfig:(id)a0;
- (void).cxx_destruct;
- (id)proto;
- (unsigned long long)writeBufferSize;

@end
