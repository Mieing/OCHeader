@class NSDictionary, NSString, UIView;

@interface AWEFeedPauseModalBaseConfig : NSObject <AWEFeedPauseModalBaseConfigProtocol>

@property (weak, nonatomic) UIView *superContainerView;
@property (retain, nonatomic) NSDictionary *logExtraDict;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)componentStrategyPriorityMapping;
- (id)introStyleArray;
- (id)bottomBarStyleArray;
- (id)bottomTabStyleArray;
- (id)styleComponentConfig;
- (id)frequencyStrategyArray;
- (void).cxx_destruct;

@end
