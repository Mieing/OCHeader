@class BaseRequest, NSString;

@interface TransferPhoneCheckNameReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) unsigned int reason;
@property (retain, nonatomic) NSString *rcvrOpenid;
@property (retain, nonatomic) NSString *rcvrToken;
@property (retain, nonatomic) NSString *inputName;
@property (retain, nonatomic) NSString *getRcvrExt;
@property (retain, nonatomic) NSString *spamInfoToken;

+ (void)initialize;

@end
