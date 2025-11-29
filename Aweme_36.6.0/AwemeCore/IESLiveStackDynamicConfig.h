@class NSNumber;

@interface IESLiveStackDynamicConfig : IESLiveStackDynamicRule

@property (nonatomic) long long distribution;
@property (nonatomic) long long alignment;
@property (retain, nonatomic) NSNumber *spacing;

- (void)executeAtState:(unsigned long long)a0 managedStack:(id)a1;
- (id)initWithDistribution:(long long)a0 alignment:(long long)a1 spacing:(id)a2;
- (void).cxx_destruct;

@end
