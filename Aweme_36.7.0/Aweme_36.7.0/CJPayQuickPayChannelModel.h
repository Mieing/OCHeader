@class NSArray, NSString;
@protocol CJPayQuickPayCardModel;

@interface CJPayQuickPayChannelModel : CJPayChannelModel

@property (copy, nonatomic) NSArray<CJPayQuickPayCardModel> *cards;
@property (copy, nonatomic) NSArray<CJPayQuickPayCardModel> *discountBanks;
@property (copy, nonatomic) NSString *enableBindCard;
@property (copy, nonatomic) NSString *enableBindCardMsg;
@property (copy, nonatomic) NSString *discountBindCardMsg;
@property (copy, nonatomic) NSString *ttSubTitle;
@property (nonatomic) BOOL withdrawCharge;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;
+ (id)modelContainerPropertyGenericClass;
+ (id)modelCustomPropertyMapper;
+ (id)keyMapperDict;

- (id)buildShowConfig;
- (BOOL)hasValidBankCard;
- (void).cxx_destruct;

@end
