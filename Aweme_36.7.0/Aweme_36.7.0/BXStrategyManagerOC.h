@class NSMutableDictionary;

@interface BXStrategyManagerOC : NSObject

@property (retain, nonatomic) NSMutableDictionary *strategyDic;

+ (id)sharedInstance;

- (id)createByteBenchStrategy:(int)a0;
- (id)getByteBenchStrategy:(int)a0;
- (void).cxx_destruct;
- (id)init;

@end
