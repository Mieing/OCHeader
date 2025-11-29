@class GetChatHistoryResp_Data;

@interface GetChatHistoryResp : IESLivePBBaseMessage

@property (retain, nonatomic) GetChatHistoryResp_Data *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
