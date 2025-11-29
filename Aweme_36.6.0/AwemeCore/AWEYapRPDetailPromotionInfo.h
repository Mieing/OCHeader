@class NSString;

@interface AWEYapRPDetailPromotionInfo : AWEBaseApiModel

@property (copy, nonatomic) NSString *promotionDesc;
@property (copy, nonatomic) NSString *promotionIconURL;
@property (copy, nonatomic) NSString *buttonText;
@property (copy, nonatomic) NSString *buttonURL;
@property (copy, nonatomic) NSString *activityID;
@property (copy, nonatomic) NSString *promotionBizCode;
@property (copy, nonatomic) NSString *groupNo;
@property (copy, nonatomic) NSString *promotionType;
@property (copy, nonatomic) NSString *pageUrl;
@property (readonly, nonatomic) BOOL isValid;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
