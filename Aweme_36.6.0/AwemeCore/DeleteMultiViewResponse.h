@class DeleteMultiViewResponse_Data;

@interface DeleteMultiViewResponse : IESLivePBBaseMessage

@property (retain, nonatomic) DeleteMultiViewResponse_Data *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
