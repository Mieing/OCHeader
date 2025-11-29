@class NSMutableArray, BaseResponse;

@interface WxaABTestInfoResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSMutableArray *appinfoList;

+ (void)initialize;

@end
