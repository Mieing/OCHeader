@class BizReplyResult_ResponseData;

@interface BizReplyResult : IESLivePBBaseMessage

@property (retain, nonatomic) BizReplyResult_ResponseData *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
