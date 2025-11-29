@class NSString, NSMutableArray, HTSLiveImage;

@interface HTSLiveLinkerEnlargeUpdateContent : IESLivePBBaseMessage

@property (retain, nonatomic) NSMutableArray *enlargeUserIdsArray;
@property (readonly, nonatomic) unsigned long long enlargeUserIdsArray_Count;
@property (nonatomic) int inviteType;
@property (nonatomic) int targetEnlargeGuestType;
@property (copy, nonatomic) NSString *fromUserId;
@property (retain, nonatomic) HTSLiveImage *uiImage;
@property (nonatomic) BOOL hasUiImage;

+ (id)descriptor;

@end
