@interface IESLiveAnchorPrivacyConfig : NSObject

@property (nonatomic) BOOL shouldPauseOnBackground;
@property (nonatomic) BOOL shouldPauseOnEnterNewPage;

+ (id)audioModeConfig;
+ (id)externalModeConfig;
+ (id)screenShotModeConfig;
+ (id)videoModeConfig;

@end
