@class ActionCodeNotifyEncryptContext;

@interface ActionCodeNotifyContext : WXPBGeneratedMessage

@property (nonatomic) BOOL isEncrypted;
@property (retain, nonatomic) ActionCodeNotifyEncryptContext *encryptContext;

+ (void)initialize;

@end
