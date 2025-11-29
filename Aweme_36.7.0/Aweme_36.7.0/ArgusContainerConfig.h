@class NSString, NSDictionary;

@interface ArgusContainerConfig : NSObject

@property (readonly, copy, nonatomic) NSString *containerId;
@property (readonly, nonatomic) unsigned long long packageVersion;
@property (readonly, copy, nonatomic) NSString *packageSource;
@property (readonly, nonatomic) NSDictionary *strategyConfig;
@property (readonly, nonatomic) NSDictionary *aspectConfig;

- (id)initWithContainerId:(id)a0 dataSourceInfo:(id)a1 strategyConfig:(id)a2 aspectConfig:(id)a3;
- (id)getStrategyConfig:(id)a0;
- (id)getAspectConfig:(id)a0;
- (void).cxx_destruct;

@end
