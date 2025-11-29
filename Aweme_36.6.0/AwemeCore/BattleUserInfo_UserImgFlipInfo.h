@class NSString, HTSLiveImage;

@interface BattleUserInfo_UserImgFlipInfo : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveImage *flipImage;
@property (nonatomic) BOOL hasFlipImage;
@property (retain, nonatomic) HTSLiveImage *pkStageMedal;
@property (nonatomic) BOOL hasPkStageMedal;
@property (copy, nonatomic) NSString *pkStageDesc;
@property (copy, nonatomic) NSString *scheme;
@property (retain, nonatomic) HTSLiveImage *seasonAvatarFrame;
@property (nonatomic) BOOL hasSeasonAvatarFrame;

+ (id)descriptor;

@end
