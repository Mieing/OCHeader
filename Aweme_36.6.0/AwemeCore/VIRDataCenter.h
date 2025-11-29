@protocol AWELiveStrategyServiceAdapter;

@interface VIRDataCenter : NSObject

@property (retain, nonatomic) id<AWELiveStrategyServiceAdapter> strategyService;

+ (id)shareInstance;

- (void)batchCollectInformation:(id)a0;
- (id)characterValueForKey:(id)a0;
- (void).cxx_destruct;

@end
