@class NSArray, NSString;

@interface AWETabBackToFeedStrategyModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSArray *strategyArray;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)strategyArrayJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
