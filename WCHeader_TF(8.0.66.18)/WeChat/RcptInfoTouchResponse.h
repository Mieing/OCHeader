@class BaseResponse, RcptInfoList;

@interface RcptInfoTouchResponse : WXPBGeneratedMessage

@property (retain, nonatomic) RcptInfoList *rcptinfolist;
@property (retain, nonatomic) BaseResponse *baseResponse;

+ (void)initialize;

@end
