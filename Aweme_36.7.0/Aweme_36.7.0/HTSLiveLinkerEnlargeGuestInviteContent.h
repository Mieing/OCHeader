@class NSString, HTSLiveImage;

@interface HTSLiveLinkerEnlargeGuestInviteContent : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *fromUserId;
@property (copy, nonatomic) NSString *toUserId;
@property (nonatomic) int inviteType;
@property (retain, nonatomic) HTSLiveImage *uiImage;
@property (nonatomic) BOOL hasUiImage;
@property (nonatomic) int targetEnlargeGuestType;

+ (id)descriptor;

@end
