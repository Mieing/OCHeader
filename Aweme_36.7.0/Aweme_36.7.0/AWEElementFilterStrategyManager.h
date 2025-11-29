@class NSString, NSMutableDictionary;

@interface AWEElementFilterStrategyManager : NSObject <AWEElementFilterStrategyManagerProtocol>

@property (retain, nonatomic) NSMutableDictionary *strategyInfoMap;
@property (retain, nonatomic) NSMutableDictionary *strategiesMap;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)defaultManager;

- (void)registStrategy:(id /* block */)a0;
- (BOOL)registWithStrategyInfo:(id)a0;
- (id)getStrategyInfoWithID:(long long)a0;
- (id)loadStrategiesWithIds:(id)a0 context:(id)a1;
- (void).cxx_destruct;

@end
