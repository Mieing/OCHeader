@class NSString;

@interface IESLiveGetUserSettingResponse_UserSetting : IESLivePBBaseMessage

@property (nonatomic) long long profileStyle;
@property (nonatomic) long long userGiftSwitch;
@property (nonatomic) long long userGiftOffReason;
@property (copy, nonatomic) NSString *failMessage;
@property (nonatomic) long long anchorUserRelationSwitch;
@property (nonatomic) long long liveVisitorSwitch;
@property (nonatomic) long long faceGiftSwitch;
@property (nonatomic) long long giftDiamondLevel;

+ (id)descriptor;

@end
