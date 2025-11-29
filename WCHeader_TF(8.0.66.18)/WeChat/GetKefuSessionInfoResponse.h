@class NSMutableArray, BaseResponse;

@interface GetKefuSessionInfoResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSMutableArray *blockQrPrefix;

+ (void)initialize;

@end
