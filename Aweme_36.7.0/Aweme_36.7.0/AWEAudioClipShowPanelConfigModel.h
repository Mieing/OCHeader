@class ACCMusicUIThemeModel, ACCMusicTrimViewSnapShootModel;

@interface AWEAudioClipShowPanelConfigModel : NSObject

@property (nonatomic) double shootDuration;
@property (nonatomic) double startLocation;
@property (nonatomic) double currentClipDuration;
@property (nonatomic) double availableCutDuration;
@property (nonatomic) BOOL enableMusicLoop;
@property (nonatomic) BOOL enableUseOriginMusic;
@property (nonatomic) BOOL useSuggestInitial;
@property (retain, nonatomic) ACCMusicTrimViewSnapShootModel *imageMusicTrimStatusModel;
@property (nonatomic) double musicClipMinDuration;
@property (nonatomic) double musicClipMaxDuration;
@property (nonatomic) BOOL assignFixedMusicDuration;
@property (nonatomic) BOOL disableShowGuideBubbles;
@property (retain, nonatomic) ACCMusicUIThemeModel *themeModel;
@property (nonatomic) BOOL musicShareStory25;

- (void).cxx_destruct;

@end
