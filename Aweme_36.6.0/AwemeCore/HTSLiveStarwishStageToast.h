@class HTSLiveUser;

@interface HTSLiveStarwishStageToast : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveUser *fromUser;
@property (nonatomic) BOOL hasFromUser;
@property (retain, nonatomic) HTSLiveUser *toUser;
@property (nonatomic) BOOL hasToUser;
@property (nonatomic) int toastType;
@property (retain, nonatomic) HTSLiveUser *leaveUser;
@property (nonatomic) BOOL hasLeaveUser;

+ (id)descriptor;

@end
