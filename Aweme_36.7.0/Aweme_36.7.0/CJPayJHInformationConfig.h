@class NSString;

@interface CJPayJHInformationConfig : JSONModel

@property (copy, nonatomic) NSString *jhMerchantId;
@property (copy, nonatomic) NSString *jhAppId;
@property (copy, nonatomic) NSString *source;
@property (copy, nonatomic) NSString *teaSourceNtv;
@property (copy, nonatomic) NSString *teaSourceLynx;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;

- (void).cxx_destruct;

@end
