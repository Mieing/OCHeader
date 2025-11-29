@class QuerySideBarWelfareResponse_Data;

@interface QuerySideBarWelfareResponse : IESLivePBBaseMessage

@property (retain, nonatomic) QuerySideBarWelfareResponse_Data *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
