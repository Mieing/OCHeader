@class NSString, BaseResponse;

@interface GetDistributePreviewResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) int retCode;
@property (retain, nonatomic) NSString *retMsg;
@property (retain, nonatomic) NSString *urlH5;
@property (retain, nonatomic) NSString *traceInfo;

+ (void)initialize;

@end
