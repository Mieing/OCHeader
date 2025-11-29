@class NSMutableArray, HTSLiveUser;

@interface GetAdminPrivilegesResponse_ResponseData : IESLivePBBaseMessage

@property (retain, nonatomic) NSMutableArray *privilegeGroupsArray;
@property (readonly, nonatomic) unsigned long long privilegeGroupsArray_Count;
@property (retain, nonatomic) HTSLiveUser *adminUserInfo;
@property (nonatomic) BOOL hasAdminUserInfo;

+ (id)descriptor;

@end
