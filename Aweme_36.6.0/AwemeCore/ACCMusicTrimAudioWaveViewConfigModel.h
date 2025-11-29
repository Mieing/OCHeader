@class NSString, NSURL, ACCMusicUIThemeModel;

@interface ACCMusicTrimAudioWaveViewConfigModel : NSObject

@property (retain, nonatomic) NSString *musicID;
@property (retain, nonatomic) NSURL *audioURL;
@property (nonatomic) double totalAudioDuration;
@property (nonatomic) double audioLengthEachPointStandFor;
@property (nonatomic) BOOL enableUserDrag;
@property (nonatomic) double audioWaveViewWidth;
@property (nonatomic) double audioWaveViewHeight;
@property (retain, nonatomic) ACCMusicUIThemeModel *themeModel;

- (void).cxx_destruct;

@end
