@class NSString;

@interface AuthenTouchPayInfo : WXPBGeneratedMessage

@property (nonatomic) BOOL useTouch;
@property (nonatomic) unsigned int fpIdentifyNum;
@property (retain, nonatomic) NSString *encryptedPayInfo;
@property (retain, nonatomic) NSString *encryptedRsaSign;
@property (retain, nonatomic) NSString *soterReq;
@property (retain, nonatomic) NSString *bioPayV2AuthenRequest;

+ (void)initialize;

@end
