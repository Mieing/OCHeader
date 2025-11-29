@class NSString, BaseResponse;

@interface GetLatestPayProductInfoResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSString *product;
@property (nonatomic) int outerErrCode;
@property (retain, nonatomic) NSString *outerErrMsg;
@property (retain, nonatomic) NSString *outerRemarks;
@property (nonatomic) int wxErrCode;
@property (retain, nonatomic) NSString *wxErrMsg;
@property (retain, nonatomic) NSString *productList;

+ (void)initialize;

@end
