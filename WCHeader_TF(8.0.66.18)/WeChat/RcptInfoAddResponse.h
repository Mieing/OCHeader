@class BaseResponse, RcptInfoList;

@interface RcptInfoAddResponse : WXPBGeneratedMessage

@property (retain, nonatomic) RcptInfoList *rcptinfolist;
@property (retain, nonatomic) BaseResponse *baseResponse;

+ (void)initialize;

@end
