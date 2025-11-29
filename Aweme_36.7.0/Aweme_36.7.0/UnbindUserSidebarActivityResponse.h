@class UnbindUserSidebarActivityResponse_Data;

@interface UnbindUserSidebarActivityResponse : IESLivePBBaseMessage

@property (retain, nonatomic) UnbindUserSidebarActivityResponse_Data *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
