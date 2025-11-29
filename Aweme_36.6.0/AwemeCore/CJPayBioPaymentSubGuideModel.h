@class NSString;

@interface CJPayBioPaymentSubGuideModel : JSONModel

@property (copy, nonatomic) NSString *iconUrl;
@property (copy, nonatomic) NSString *iconDesc;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;

- (void).cxx_destruct;

@end
