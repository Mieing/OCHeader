@interface AWEDCFeedSimultaneousConfig : AWEDCFeedBaseConfig

@property (nonatomic) BOOL enable;
@property (nonatomic) unsigned long long simultaneousType;
@property (copy, nonatomic) id /* block */ simultaneousOffset;
@property (copy, nonatomic) id /* block */ transitionStartViewForOffset;

- (void)setupDefaultConfig;
- (void).cxx_destruct;

@end
