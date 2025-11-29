@class NSString, HTSLiveImage;

@interface HTSLiveLinkerEnlargeGuestApplyContent : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *fromUserId;
@property (copy, nonatomic) NSString *applyPrompts;
@property (retain, nonatomic) HTSLiveImage *uiImage;
@property (nonatomic) BOOL hasUiImage;
@property (nonatomic) int targetEnlargeGuestType;

+ (id)descriptor;

@end
