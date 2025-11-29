@class NSString;

@interface AWEIMDouyinRedPacketGetPromotionsResponse : AWEBaseApiModel

@property (nonatomic) unsigned long long businessCode;
@property (copy, nonatomic) NSString *businessMsg;
@property (copy, nonatomic) NSString *promotionsInfo;
@property (copy, nonatomic) NSString *promotionsInfoBackUp;
@property (nonatomic) long long promotionsAmount;
@property (copy, nonatomic) NSString *btnTitle;
@property (copy, nonatomic) NSString *orderID;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
