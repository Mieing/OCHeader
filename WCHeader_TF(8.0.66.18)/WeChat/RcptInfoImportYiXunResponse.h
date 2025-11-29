@class BaseResponse, RcptInfoList;

@interface RcptInfoImportYiXunResponse : WXPBGeneratedMessage

@property (retain, nonatomic) RcptInfoList *rcptinfolist;
@property (nonatomic) int rcptinfoimportstatus;
@property (retain, nonatomic) BaseResponse *baseResponse;

+ (void)initialize;

@end
