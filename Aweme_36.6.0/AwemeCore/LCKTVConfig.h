@class NSURL;

@interface LCKTVConfig : NSObject

@property (retain, nonatomic) NSURL *musicURL;
@property (retain, nonatomic) NSURL *originURL;
@property (nonatomic) BOOL loop;
@property (nonatomic) double musicStartTime;
@property (nonatomic) unsigned long long ktvType;
@property (nonatomic) unsigned long long musicType;
@property (nonatomic) BOOL enableBGMusicFadeInOut;
@property (nonatomic) int bgMusicFadeInDuration;
@property (nonatomic) int bgMusicFadeInCurve;
@property (nonatomic) int bgMusicFadeOutDuration;
@property (nonatomic) int bgMusicFadeOutCurve;

+ (id)defaultConfigWithMusicURL:(id)a0;

- (void).cxx_destruct;

@end
