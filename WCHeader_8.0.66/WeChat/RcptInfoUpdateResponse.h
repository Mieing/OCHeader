@class BaseResponse, RcptInfoList;

@interface RcptInfoUpdateResponse : WXPBGeneratedMessage

@property (retain, nonatomic) RcptInfoList *rcptinfolist;
@property (retain, nonatomic) BaseResponse *baseResponse;

+ (void)initialize;

@end
