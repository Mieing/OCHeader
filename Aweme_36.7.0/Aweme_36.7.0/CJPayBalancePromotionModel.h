@class NSString;

@interface CJPayBalancePromotionModel : JSONModel

@property (copy, nonatomic) NSString *promotionDescription;
@property (copy, nonatomic) NSString *resourceNo;
@property (copy, nonatomic) NSString *planNo;
@property (copy, nonatomic) NSString *materialNo;
@property (copy, nonatomic) NSString *bizType;
@property (nonatomic) BOOL hasBindCardLottery;
@property (copy, nonatomic) NSString *bindCardInfo;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;
+ (id)modelCustomPropertyMapper;
+ (id)keyMapperDict;

- (void).cxx_destruct;

@end
