@class NSString, BaseResponse;

@interface GetPackageResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSString *orderId;
@property (retain, nonatomic) NSString *openKey;
@property (retain, nonatomic) NSString *offerid;
@property (retain, nonatomic) NSString *urlParams;
@property (nonatomic) int fee;
@property (nonatomic) int errCode;
@property (retain, nonatomic) NSString *errMsg;
@property (retain, nonatomic) NSString *productId;
@property (nonatomic) int appusernameVersion;

+ (void)initialize;

@end
