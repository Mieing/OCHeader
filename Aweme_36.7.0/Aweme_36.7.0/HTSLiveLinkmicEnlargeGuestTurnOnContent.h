@class NSString, HTSLiveEnlargeGuestInfo;

@interface HTSLiveLinkmicEnlargeGuestTurnOnContent : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *enlargedUserId;
@property (nonatomic) int source;
@property (retain, nonatomic) HTSLiveEnlargeGuestInfo *info;
@property (nonatomic) BOOL hasInfo;
@property (copy, nonatomic) NSString *trackingData;

+ (id)descriptor;

@end
