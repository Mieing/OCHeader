@class DeleteHistoryResponse_Data;

@interface DeleteHistoryResponse : IESLivePBBaseMessage

@property (retain, nonatomic) DeleteHistoryResponse_Data *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
