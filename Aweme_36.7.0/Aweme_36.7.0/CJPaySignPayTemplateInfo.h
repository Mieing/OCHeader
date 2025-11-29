@class NSString, NSArray;

@interface CJPaySignPayTemplateInfo : JSONModel

@property (copy, nonatomic) NSString *templateId;
@property (copy, nonatomic) NSString *zgMerchantId;
@property (copy, nonatomic) NSString *zgMerchantName;
@property (copy, nonatomic) NSString *zgMerchantAppid;
@property (copy, nonatomic) NSString *serviceName;
@property (copy, nonatomic) NSString *icon;
@property (copy, nonatomic) NSString *serviceDesc;
@property (copy, nonatomic) NSString *pageTitle;
@property (copy, nonatomic) NSString *buttonDesc;
@property (copy, nonatomic) NSArray *supportPayType;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;

- (void).cxx_destruct;

@end
