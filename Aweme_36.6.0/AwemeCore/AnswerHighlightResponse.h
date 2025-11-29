@class AnswerHighlightResponse_Response;

@interface AnswerHighlightResponse : IESLivePBBaseMessage

@property (retain, nonatomic) AnswerHighlightResponse_Response *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
