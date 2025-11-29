@class NSString, WalletIcon;

@interface WalletFunction : WXPBGeneratedMessage

@property (nonatomic) unsigned int funcId;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) WalletIcon *icon;

+ (void)initialize;

@end
