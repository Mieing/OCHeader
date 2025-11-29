@class NSString, WalletWeAppInfo;

@interface WalletEntrance : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *urlnative;
@property (retain, nonatomic) NSString *urlhtml;
@property (retain, nonatomic) WalletWeAppInfo *urlweApp;
@property (nonatomic) unsigned int type;

+ (void)initialize;

@end
