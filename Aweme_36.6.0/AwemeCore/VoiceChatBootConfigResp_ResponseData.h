@class NSString, VoiceChatStartButton;

@interface VoiceChatBootConfigResp_ResponseData : IESLivePBBaseMessage

@property (nonatomic) long long giftId;
@property (nonatomic) long long effectId;
@property (copy, nonatomic) NSString *authorName;
@property (copy, nonatomic) NSString *authorAvatar;
@property (retain, nonatomic) VoiceChatStartButton *startButton;
@property (nonatomic) BOOL hasStartButton;
@property (nonatomic) long long giftDiamondCount;

+ (id)descriptor;

@end
