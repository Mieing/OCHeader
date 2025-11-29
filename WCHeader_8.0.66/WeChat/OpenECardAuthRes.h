@class NSString, PopItem, BaseResponse;

@interface OpenECardAuthRes : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) unsigned int retCode;
@property (retain, nonatomic) NSString *retMsg;
@property (retain, nonatomic) NSString *rettext;
@property (retain, nonatomic) NSString *reqSerial;
@property (retain, nonatomic) PopItem *guideInfo;
@property (nonatomic) BOOL isTokenInvalid;
@property (nonatomic) BOOL isReuseExistingEcard;

+ (void)initialize;

@end
