@class NSString;

@interface CJPayPrimaryCombinePayInfoModel : JSONModel

@property (nonatomic) long long secondaryPayTypeIndex;
@property (nonatomic) long long primaryAmount;
@property (nonatomic) long long secondaryAmount;
@property (copy, nonatomic) NSString *primaryAmountString;
@property (copy, nonatomic) NSString *secondaryAmountString;
@property (copy, nonatomic) NSString *secondaryPayTypeStr;
@property (copy, nonatomic) NSString *tradeConfirmButtonLabel;
@property (readonly, nonatomic) unsigned long long channelType;
@property (nonatomic) long long expandPrimaryAmount;
@property (nonatomic) long long expandSecondaryAmount;
@property (copy, nonatomic) NSString *expandSecondaryPayTypeMsg;
@property (copy, nonatomic) NSString *expandPrimaryPayTypeMsg;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;
+ (id)modelCustomPropertyMapper;
+ (id)keyMapperDict;

- (void).cxx_destruct;

@end
