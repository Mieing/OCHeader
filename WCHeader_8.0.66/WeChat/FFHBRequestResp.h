@class NSString, InterceptWin, BaseResponse;

@interface FFHBRequestResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) unsigned int retcode;
@property (retain, nonatomic) NSString *retmsg;
@property (retain, nonatomic) NSString *sendId;
@property (retain, nonatomic) NSString *reqkey;
@property (retain, nonatomic) NSString *idSign;
@property (retain, nonatomic) InterceptWin *interceptWin;

+ (void)initialize;

@end
