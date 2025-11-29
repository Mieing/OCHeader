@class NSString, NSDictionary;

@interface IESLiveVideoGiftMetalConfiguration : NSObject

@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } liveRenderSuperViewFame;
@property (copy, nonatomic) NSString *directory;
@property (nonatomic) unsigned long long orientation;
@property (nonatomic) BOOL loop;
@property (nonatomic, getter=isRemovedOnCompletion) BOOL removedOnCompletion;
@property (nonatomic, getter=isUsingDrawTimer) BOOL useDrawTimer;
@property (nonatomic, getter=isKeepingPreviousView) BOOL keepPreviousView;
@property (nonatomic) BOOL openOptimize;
@property (nonatomic) BOOL disableAudioPlayerObserver;
@property (nonatomic) BOOL enableAsyncSetupPipeline;
@property (copy, nonatomic) NSString *foregroundKey;
@property (copy, nonatomic) NSString *backgroundKey;
@property (nonatomic) BOOL disableAudio;
@property (nonatomic) BOOL disableVibrate;
@property (nonatomic) BOOL enableVideoSR;
@property (nonatomic) long long srType;
@property (nonatomic) long long srScaleMode;
@property (nonatomic) BOOL asyncRenderMTKView;
@property (nonatomic) BOOL enableOptRender;
@property (nonatomic) BOOL enableOptRenderOtherContentMode;
@property (retain, nonatomic) NSDictionary *maskResourceDic;
@property (nonatomic) long long audioPlayerType;
@property (nonatomic) long long audioPlaybackType;
@property (nonatomic) long long audioBufferSize;
@property (nonatomic) BOOL enableTouchOnMask;
@property (nonatomic) BOOL bpeaAudioCertEnable;
@property (copy, nonatomic) NSString *bpeaAudioCertToken;
@property (copy, nonatomic) id /* block */ offscreenRenderCallback;
@property (nonatomic) BOOL enableRenderInactive;
@property (copy, nonatomic) NSDictionary *settingDictionary;

+ (id)defaultConfiguration;

- (void).cxx_destruct;
- (id)init;

@end
