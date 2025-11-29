@class NSMutableArray, NSArray, NSMutableDictionary, NSObject, WCFinderWCDB;
@protocol OS_dispatch_queue;

@interface WCFinderPrefetchManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *managerDict;
@property (retain, nonatomic) NSArray *prefetchSceneArray;
@property (weak, nonatomic) WCFinderWCDB *finderDB;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *prefetchQueue;
@property (retain, nonatomic) NSMutableArray *allPrefetchFeatureArray;

- (id)initWithFinderDB:(id)a0;
- (id)modelWithPrefetchScene:(unsigned long long)a0;
- (unsigned long long)maxValidPeriod;
- (void)addPrefetchFeature:(id)a0;
- (unsigned long long)lastEnterSubEntranceWithInterval:(unsigned long long)a0;
- (id)getPrefetchFeatureArrayWithTimeInterval:(unsigned long long)a0 scene:(unsigned long long)a1;
- (id)_getPrefetchFeatureArrayWithTimeInterval:(unsigned long long)a0 scene:(unsigned long long)a1;
- (float)enterProbBaseOnTime:(unsigned long long)a0;
- (float)enterProbBaseOnActionSeries:(unsigned long long)a0;
- (void).cxx_destruct;

@end
