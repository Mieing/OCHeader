@class NSString, NSData;

@interface DecryptedForwardWechatMsg : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *climsgid;
@property (nonatomic) unsigned int msgType;
@property (retain, nonatomic) NSData *content;
@property (nonatomic) int retCode;

+ (void)initialize;

@end
