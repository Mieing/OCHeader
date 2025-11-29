@class NSString;

@interface WalletRequestItem : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *domain;
@property (retain, nonatomic) NSString *token;

+ (void)initialize;

@end
