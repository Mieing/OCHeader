@class NSString;

@interface AWEIMRecommendGroupItemTemplateValueModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long valueType;
@property (copy, nonatomic) NSString *valueString;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
