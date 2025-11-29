@class NSString, CreInfo, NSMutableArray, BaseResponse;

@interface GetBanPayMobileInfoResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) int errCode;
@property (retain, nonatomic) NSString *errMsg;
@property (retain, nonatomic) NSMutableArray *array;
@property (retain, nonatomic) CreInfo *creInfo;

+ (void)initialize;

@end
