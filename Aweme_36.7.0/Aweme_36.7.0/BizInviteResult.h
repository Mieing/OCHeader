@class BizInviteResult_ResponseData;

@interface BizInviteResult : IESLivePBBaseMessage

@property (retain, nonatomic) BizInviteResult_ResponseData *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
