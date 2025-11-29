@class NSString;

@interface CJPayBioOpenAndPayInfo : JSONModel

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *iconUrl;
@property (copy, nonatomic) NSString *switchPayTypeText;
@property (copy, nonatomic) NSString *confirmButtonText;
@property (nonatomic) double minLoadingTimeMs;
@property (copy, nonatomic) NSString *openLoadingTitle;
@property (copy, nonatomic) NSString *openBioSuccessTitle;
@property (copy, nonatomic) NSString *openBioFailureTitle;
@property (nonatomic) BOOL enableBioOpen;
@property (copy, nonatomic) NSString *token;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;
+ (id)modelCustomPropertyMapper;
+ (id)keyMapperDict;

- (double)minLoadingTimeS;
- (void).cxx_destruct;
- (BOOL)isValid;

@end
