@class NSMutableDictionary;

@interface NLETimeObserver : NSObject

@property (retain, nonatomic) NSMutableDictionary *parameters;
@property (retain, nonatomic) NSMutableDictionary *durations;

+ (id)sharedInstance;

- (double)nle_doubleValueForKey:(id)a0 dictionary:(id)a1;
- (void)willBeginMergeVideo;
- (void)nleGetBeginOrder;
- (void)veGetBeginOrder;
- (void)nleGetFinishOrder;
- (void)didFinishMergeVideo;
- (id)getMergeTimeCost;
- (void)printTimeCost;
- (void).cxx_destruct;
- (id)init;

@end
