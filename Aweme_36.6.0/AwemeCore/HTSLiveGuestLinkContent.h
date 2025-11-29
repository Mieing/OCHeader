@interface HTSLiveGuestLinkContent : IESLivePBBaseMessage

@property (nonatomic) long long linkThreshold;
@property (nonatomic) long long callDuration;
@property (nonatomic) BOOL autoOpen;
@property (nonatomic) BOOL isOpen;
@property (nonatomic) BOOL enableSetting;

+ (id)descriptor;

@end
