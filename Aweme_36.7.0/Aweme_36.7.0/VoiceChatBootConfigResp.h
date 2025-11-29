@class VoiceChatBootConfigResp_ResponseData;

@interface VoiceChatBootConfigResp : IESLivePBBaseMessage

@property (retain, nonatomic) VoiceChatBootConfigResp_ResponseData *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
