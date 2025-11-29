@class GetBGPromptResponse_ResponseData;

@interface GetBGPromptResponse : IESLivePBBaseMessage

@property (retain, nonatomic) GetBGPromptResponse_ResponseData *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
