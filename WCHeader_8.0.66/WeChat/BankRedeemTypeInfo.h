@class NSString, NSMutableArray, SlowRedeemDisplayInfo;

@interface BankRedeemTypeInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *bindSerialno;
@property (retain, nonatomic) NSMutableArray *redeemTypeList;
@property (retain, nonatomic) SlowRedeemDisplayInfo *slowRedeemDisplayInfo;

+ (void)initialize;

@end
