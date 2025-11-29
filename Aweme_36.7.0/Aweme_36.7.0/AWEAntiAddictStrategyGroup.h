@class NSArray, NSString;

@interface AWEAntiAddictStrategyGroup : NSObject <AWEAntiAddictLogProtocol>

@property (retain, nonatomic) NSArray *allStrategies;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)moduleName;

- (id)decideWithPreparedData:(id)a0 threadSyncIndex:(unsigned long long)a1 triggerType:(long long)a2;
- (void).cxx_destruct;

@end
