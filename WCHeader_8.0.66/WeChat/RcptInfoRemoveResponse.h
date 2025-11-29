@class BaseResponse, RcptInfoList;

@interface RcptInfoRemoveResponse : WXPBGeneratedMessage

@property (nonatomic) unsigned int id;
@property (retain, nonatomic) RcptInfoList *rcptinfolist;
@property (retain, nonatomic) BaseResponse *baseResponse;

+ (void)initialize;

@end
