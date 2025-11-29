@class NSDictionary, NSString;

@interface IESECRecommendLynxCardModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSDictionary *config;
@property (copy, nonatomic) NSString *data;
@property (copy, nonatomic) NSString *track;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
