@class NSString, BaseResponse;

@interface SearchWebQueryResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSString *commResp;
@property (retain, nonatomic) NSString *requestId;

+ (void)initialize;

@end
