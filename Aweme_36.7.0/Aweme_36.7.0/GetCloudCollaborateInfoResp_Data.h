@class NSString, NSMutableArray;

@interface GetCloudCollaborateInfoResp_Data : IESLivePBBaseMessage

@property (nonatomic) long long collaborateStatus;
@property (retain, nonatomic) NSMutableArray *userInfosArray;
@property (readonly, nonatomic) unsigned long long userInfosArray_Count;
@property (nonatomic) long long startTime;
@property (copy, nonatomic) NSString *extra;

+ (id)descriptor;

@end
