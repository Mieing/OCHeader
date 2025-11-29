@class QueryAvailableSidebarWelfareResponse_Data;

@interface QueryAvailableSidebarWelfareResponse : IESLivePBBaseMessage

@property (retain, nonatomic) QueryAvailableSidebarWelfareResponse_Data *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
