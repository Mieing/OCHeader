@class NSMutableArray;

@interface HTSLiveCloudCollaborateInfo : IESLivePBBaseMessage

@property (retain, nonatomic) NSMutableArray *membersArray;
@property (readonly, nonatomic) unsigned long long membersArray_Count;
@property (nonatomic) long long status;

+ (id)descriptor;

@end
