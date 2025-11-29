@class NSString;

@interface IESECGoodsDetailButtonExtraModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) unsigned long long membershipStatus;
@property (copy, nonatomic) NSString *buttonText;
@property (copy, nonatomic) NSString *joinMemberUrl;
@property (copy, nonatomic) NSString *defaultText;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONStringToDictTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
