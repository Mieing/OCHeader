@class NSString, RealNameAuthInfo, LiteappJumpInfo, WecoinActionSheetInfo;

@interface WecoinIncomeBusinessInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned int businessId;
@property (retain, nonatomic) NSString *iconUrl;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) WecoinActionSheetInfo *actionSheetInfo;
@property (nonatomic) long long incomeBalance;
@property (retain, nonatomic) NSString *incomeUrl;
@property (retain, nonatomic) NSString *extraInfo;
@property (retain, nonatomic) NSString *extraLinkInfo;
@property (retain, nonatomic) NSString *extraLinkUrl;
@property (retain, nonatomic) RealNameAuthInfo *authInfo;
@property (retain, nonatomic) LiteappJumpInfo *encashInterceptJumpInfo;

+ (void)initialize;

@end
