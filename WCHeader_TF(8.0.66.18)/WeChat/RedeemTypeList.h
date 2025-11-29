@class NSString;

@interface RedeemTypeList : WXPBGeneratedMessage

@property (nonatomic) unsigned int redeemType;
@property (retain, nonatomic) NSString *arriveTimeWording;
@property (retain, nonatomic) NSString *hintWording;
@property (nonatomic) unsigned int redeemFeeLimit;

+ (void)initialize;

@end
