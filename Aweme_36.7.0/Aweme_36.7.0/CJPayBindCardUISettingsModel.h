@interface CJPayBindCardUISettingsModel : JSONModel

@property (nonatomic) BOOL isShowIDProfileCard;
@property (nonatomic) BOOL updateMerchantId;
@property (nonatomic) long long userInputCacheDuration;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;

@end
