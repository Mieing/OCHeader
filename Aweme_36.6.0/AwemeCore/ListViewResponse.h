@class ListViewResponse_Data;

@interface ListViewResponse : IESLivePBBaseMessage

@property (retain, nonatomic) ListViewResponse_Data *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
