@class NSSet, NSString, AWEAwemeModel, NSMutableArray, NSCache;

@interface AWEClientAIAudioInfoTracker : NSObject <FantaDataCollectorListener>

@property (retain, nonatomic) NSSet *trackerReferStrings;
@property (retain, nonatomic) NSCache *awemeFeatureCache;
@property (retain, nonatomic) NSString *lastItemID;
@property (retain, nonatomic) NSMutableArray *sequenceItems;
@property (retain, nonatomic) NSString *lastReportSequenceID;
@property (retain, nonatomic) AWEAwemeModel *currentAweme;
@property (nonatomic) long long totalVvCount;
@property (nonatomic) BOOL hasSetup;
@property (nonatomic) long long maxSequenceCount;
@property (nonatomic) float reportRate;
@property (nonatomic) long long reportVvGap;
@property (nonatomic) long long skipCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)getLiveRealTimeFeaturesWithRoomID:(id)a0;
- (id)getCurrentAweme;
- (id)pri_featureCacheForItemID:(id)a0;
- (void)addOrUpdateLastAweme:(id)a0 referString:(id)a1;
- (void)reportDataIfNeededWithActionName:(id)a0;
- (void)onDataCollector:(id)a0 collectData:(id)a1;
- (void)onScrollViewDidEndDecelerating:(id)a0 referString:(id)a1;
- (void).cxx_destruct;
- (void)onNotification:(id)a0;
- (void)setupIfNeeded;

@end
