@class BindUserSidebarActivityResponse_Data;

@interface BindUserSidebarActivityResponse : IESLivePBBaseMessage

@property (retain, nonatomic) BindUserSidebarActivityResponse_Data *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
