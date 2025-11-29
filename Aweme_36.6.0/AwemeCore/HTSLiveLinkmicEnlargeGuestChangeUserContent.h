@class NSString, HTSLiveEnlargeGuestInfo;

@interface HTSLiveLinkmicEnlargeGuestChangeUserContent : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *enlargedUserId;
@property (retain, nonatomic) HTSLiveEnlargeGuestInfo *info;
@property (nonatomic) BOOL hasInfo;
@property (copy, nonatomic) NSString *trackingData;

+ (id)descriptor;

@end
