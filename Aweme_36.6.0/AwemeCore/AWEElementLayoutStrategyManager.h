@class NSString, NSMutableDictionary;

@interface AWEElementLayoutStrategyManager : NSObject <AWEElementLayoutStrategyManagerProtocol>

@property (retain, nonatomic) NSMutableDictionary *layoutStrategyInfoMap;
@property (retain, nonatomic) NSMutableDictionary *layoutStrategyMap;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)defaultManager;

- (void)registStrategy:(id /* block */)a0;
- (BOOL)registWithStrategyInfo:(id)a0;
- (id)strategyInfoWithID:(id)a0;
- (id)pickLayoutStrategyWithStrategyIds:(id)a0 context:(id)a1;
- (void).cxx_destruct;

@end
