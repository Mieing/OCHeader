@class BaseRequest, NSString;

@interface CgiF2FDynamicCodeReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) unsigned int amount;
@property (retain, nonatomic) NSString *userName;
@property (retain, nonatomic) NSString *receiverOpenid;
@property (retain, nonatomic) NSString *transferQrcodeId;
@property (retain, nonatomic) NSString *getDynamicCodeSign;
@property (retain, nonatomic) NSString *getDynamicCodeExtend;
@property (retain, nonatomic) NSString *mchInfoString;
@property (retain, nonatomic) NSString *nickname;
@property (retain, nonatomic) NSString *receiverTrueName;

+ (void)initialize;

@end
