@class NSMutableArray;

@interface HTSLiveEnlargeGuestInfo : IESLivePBBaseMessage

@property (nonatomic) int guestType;
@property (retain, nonatomic) NSMutableArray *enlargedUserIdsArray;
@property (readonly, nonatomic) unsigned long long enlargedUserIdsArray_Count;
@property (nonatomic) long long sourceUiLayoutMaxMembers;
@property (nonatomic) long long maxMembersExceptEnlarge;

+ (id)descriptor;

@end
