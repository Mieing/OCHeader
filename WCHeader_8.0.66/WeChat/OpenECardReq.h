@class BaseRequest, NSString;

@interface OpenECardReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *ecardType;
@property (retain, nonatomic) NSString *reqSerial;
@property (retain, nonatomic) NSString *parentBindSerialno;
@property (retain, nonatomic) NSString *bankCardNoEnc;
@property (retain, nonatomic) NSString *mobileNo;
@property (retain, nonatomic) NSString *bankType;
@property (nonatomic) unsigned int openScene;
@property (nonatomic) int isRepeatSend;
@property (nonatomic) BOOL isReuseExistingEcard;
@property (nonatomic) unsigned int fromScene;
@property (retain, nonatomic) NSString *bankCardInfo;

+ (void)initialize;

@end
