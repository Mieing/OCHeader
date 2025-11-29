@class NSArray, IESLiveStrategyCombineItemV2, IESLiveStrategyCombineFactor, IESLiveStrategyConfig, NSMutableArray, NSString;

@interface IESLiveStrategyFactorIndexingItem : NSObject {
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _safeAccessLock;
}

@property (retain, nonatomic) NSMutableArray *multiCombineLists;
@property (retain, nonatomic) NSArray *combineLists;
@property BOOL useAnchorFeature;
@property (retain) IESLiveStrategyCombineFactor *preFactor;
@property (retain) IESLiveStrategyCombineItemV2 *preCombine;
@property (weak, nonatomic) IESLiveStrategyConfig *config;
@property (retain, nonatomic) NSArray *hitCombines;
@property (readonly, nonatomic) NSString *factorName;
@property (readonly) BOOL useAnchorCharacter;
@property (readonly) long long lastUpdateTime;

- (void)needUpdate;
- (id)activeCombine;
- (void)trackerHitCombineEvent:(id)a0;
- (void)trackerCombineEvent:(id)a0 withFactor:(id)a1 scene:(id)a2;
- (void)updateFactor:(id)a0 combine:(id)a1 ts:(double)a2;
- (void)updateHitCombines:(id)a0 ts:(double)a1;
- (void)addCombine:(id)a0;
- (void)sortCombine;
- (void).cxx_destruct;
- (id)initWithFactorName:(id)a0;
- (void)dealloc;

@end
