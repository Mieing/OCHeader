@class RcptInfoNode, BaseResponse;

@interface AnalyseRcptInfoResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) RcptInfoNode *rcptinfo;

+ (void)initialize;

@end
