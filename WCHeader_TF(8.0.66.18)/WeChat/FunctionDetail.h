@class NSString, WalletEntrance, WalletActivity, WalletFunction;

@interface FunctionDetail : WXPBGeneratedMessage

@property (retain, nonatomic) WalletFunction *function;
@property (retain, nonatomic) WalletActivity *activity;
@property (retain, nonatomic) WalletEntrance *entrance;
@property (nonatomic) BOOL needGetLatestInfo;
@property (nonatomic) BOOL downloadRestrict;
@property (retain, nonatomic) NSString *disclaimer;
@property (retain, nonatomic) NSString *subtitle;

+ (void)initialize;

@end
