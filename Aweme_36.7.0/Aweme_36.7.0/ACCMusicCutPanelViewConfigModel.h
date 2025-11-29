@class ACCMusicUIThemeModel, ACCMusicTrimViewSnapShootModel;
@protocol ACCMusicModelProtocol;

@interface ACCMusicCutPanelViewConfigModel : NSObject

@property (retain, nonatomic) id<ACCMusicModelProtocol> music;
@property (nonatomic) double maxClipDurationForInitialStatus;
@property (nonatomic) unsigned long long functionType;
@property (nonatomic) BOOL functionIsOpen;
@property (nonatomic) double initStartLocation;
@property (nonatomic) double initClipDuration;
@property (retain, nonatomic) ACCMusicTrimViewSnapShootModel *imageMusicTrimStatusModel;
@property (nonatomic) double musicCropMinDuration;
@property (nonatomic) double musicCropMaxDuration;
@property (nonatomic) BOOL disableShowGuideBubbles;
@property (retain, nonatomic) ACCMusicUIThemeModel *themeModel;
@property (nonatomic) BOOL useMusicAssetDuration;

- (void).cxx_destruct;
- (id)init;
- (id)logString;

@end
