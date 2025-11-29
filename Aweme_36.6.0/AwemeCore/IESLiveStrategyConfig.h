@class NSArray;

@interface IESLiveStrategyConfig : NSObject

@property (nonatomic) BOOL isOpen;
@property (nonatomic) unsigned long long dataSourceType;
@property (nonatomic) BOOL enablePreciseExperiment;
@property (retain, nonatomic) NSArray *ignoreTraceCids;
@property (retain, nonatomic) NSArray *allowTraceCids;
@property (nonatomic) BOOL lazyUpdateFactor;
@property (nonatomic) BOOL enableCloudFeature;
@property (readonly, nonatomic) long long minIntervalUpdateFactor;
@property (readonly, nonatomic) long long execStrategyInterval;
@property (readonly, nonatomic) BOOL uploadTrackerEvent;
@property (readonly, nonatomic) BOOL enableStrategyTracker;
@property (readonly, nonatomic) long long trackerMaxCount;
@property (readonly, nonatomic) BOOL enableStrategyHistoryTracker;
@property (readonly, nonatomic) long long maxCloudFeatureCount;
@property (readonly, nonatomic) BOOL enableCloudFeatureTrace;
@property (readonly, nonatomic) BOOL enableCharacterOpt;
@property (readonly, nonatomic) BOOL enableNewDataCenter;
@property (readonly, nonatomic) BOOL fixExperimentEntryIssue;
@property (readonly, nonatomic) NSArray *ignoreFaNames;

+ (id)shared;

- (void).cxx_destruct;
- (id)init;

@end
