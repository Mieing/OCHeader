@class CloseVoiceChatResp_ResponseData;

@interface CloseVoiceChatResp : IESLivePBBaseMessage

@property (retain, nonatomic) CloseVoiceChatResp_ResponseData *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
