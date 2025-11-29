@class NSString;

@interface BankElement : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *bankName;
@property (retain, nonatomic) NSString *bankLogo;
@property (retain, nonatomic) NSString *bankType;
@property (nonatomic) BOOL bankIsUsable;
@property (retain, nonatomic) NSString *bankaccTypeName;
@property (retain, nonatomic) NSString *bankaccType;
@property (retain, nonatomic) NSString *bankNamePinyin;

+ (void)initialize;

@end
