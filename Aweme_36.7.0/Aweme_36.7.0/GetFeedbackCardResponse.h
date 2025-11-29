@class GetFeedbackCardResponse_Data;

@interface GetFeedbackCardResponse : IESLivePBBaseMessage

@property (retain, nonatomic) GetFeedbackCardResponse_Data *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
