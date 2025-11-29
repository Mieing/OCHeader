@class NSString, NSArray, AWEFeedTabExitStrategyModel;

@interface AWEFeedTabJumpStrategyItemModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *tabID;
@property (nonatomic) double internalDay;
@property (copy, nonatomic) NSArray *triggerStrategies;
@property (retain, nonatomic) AWEFeedTabExitStrategyModel *exitStrategy;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)triggerStrategiesJSONTransformer;
+ (id)exitStrategyJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
