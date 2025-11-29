@class WalletIcon;

@interface WalletActivity : WXPBGeneratedMessage

@property (nonatomic) unsigned int activityId;
@property (retain, nonatomic) WalletIcon *activityIcon;

+ (void)initialize;

@end
