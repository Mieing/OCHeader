@class NSString;

@interface CJPayMerchantInfo : JSONModel

@property (copy, nonatomic) NSString *merchantId;
@property (copy, nonatomic) NSString *merchantName;
@property (copy, nonatomic) NSString *merchantShortName;
@property (copy, nonatomic) NSString *merchantShortToCustomer;
@property (copy, nonatomic) NSString *appId;
@property (copy, nonatomic) NSString *intergratedMerchantId;
@property (copy, nonatomic) NSString *jhAppId;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;
+ (id)modelCustomPropertyMapper;
+ (id)keyMapperDict;

- (void).cxx_destruct;

@end
