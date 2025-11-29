@class NSString, BaseResponse;

@interface GetFullCoverInfoResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSString *coverInfoBuffBase64;

+ (void)initialize;

@end
