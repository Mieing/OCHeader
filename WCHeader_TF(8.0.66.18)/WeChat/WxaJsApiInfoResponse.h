@class NSMutableArray, BaseResponse;

@interface WxaJsApiInfoResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSMutableArray *appinfoList;

+ (void)initialize;

@end
