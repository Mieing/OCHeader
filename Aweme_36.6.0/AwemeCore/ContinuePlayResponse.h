@class ContinuePlayResponse_Data;

@interface ContinuePlayResponse : IESLivePBBaseMessage

@property (retain, nonatomic) ContinuePlayResponse_Data *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
