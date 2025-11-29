@class NSMutableDictionary;

@interface IESLiveGiftPerformance : NSObject

@property (retain, nonatomic) NSMutableDictionary *performanceInfo;

+ (id)sharedInstance;

- (double)endWithKey:(id)a0;
- (void)startWithKey:(id)a0;
- (void).cxx_destruct;

@end
