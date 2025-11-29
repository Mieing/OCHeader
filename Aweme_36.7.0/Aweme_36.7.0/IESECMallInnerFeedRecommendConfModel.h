@class NSString;

@interface IESECMallInnerFeedRecommendConfModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *productActivityType;
@property (copy, nonatomic) NSString *title;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
