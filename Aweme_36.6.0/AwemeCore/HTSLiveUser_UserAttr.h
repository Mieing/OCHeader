@class GPBEnumArray;

@interface HTSLiveUser_UserAttr : IESLivePBBaseMessage

@property (nonatomic) BOOL isBlack;
@property (nonatomic) BOOL isMuted;
@property (nonatomic) BOOL isAdmin;
@property (nonatomic) BOOL isSuperAdmin;
@property (retain, nonatomic) GPBEnumArray *adminPrivilegesArray;
@property (readonly, nonatomic) unsigned long long adminPrivilegesArray_Count;

+ (id)descriptor;

@end
