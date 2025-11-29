@class NSString, BaseResponse;

@interface GetInitDataResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSString *openid;
@property (retain, nonatomic) NSString *openKey;
@property (retain, nonatomic) NSString *offerid;
@property (retain, nonatomic) NSString *sessionId;
@property (retain, nonatomic) NSString *sessionType;
@property (retain, nonatomic) NSString *pf;
@property (nonatomic) int errCode;
@property (retain, nonatomic) NSString *errMsg;
@property (retain, nonatomic) NSString *usableProductId;
@property (nonatomic) unsigned int environment;

+ (void)initialize;

@end
