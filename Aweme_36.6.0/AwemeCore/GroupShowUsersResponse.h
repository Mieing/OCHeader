@class GroupShowUsersResponse_Data;

@interface GroupShowUsersResponse : IESLivePBBaseMessage

@property (retain, nonatomic) GroupShowUsersResponse_Data *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
