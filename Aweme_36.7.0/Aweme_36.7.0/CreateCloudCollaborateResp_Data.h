@class NSMutableArray;

@interface CreateCloudCollaborateResp_Data : IESLivePBBaseMessage

@property (retain, nonatomic) NSMutableArray *userInfosArray;
@property (readonly, nonatomic) unsigned long long userInfosArray_Count;

+ (id)descriptor;

@end
