@class NSString, UnionTransferRealNameInfo, InterceptWin, BaseResponse;

@interface CgiUnionTransferOperationResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) unsigned int retcode;
@property (retain, nonatomic) NSString *retmsg;
@property (retain, nonatomic) UnionTransferRealNameInfo *realNameInfo;
@property (retain, nonatomic) NSString *leftButtonContinue;
@property (retain, nonatomic) InterceptWin *interceptWin;
@property (retain, nonatomic) InterceptWin *interceptWinAfter;

+ (void)initialize;

@end
