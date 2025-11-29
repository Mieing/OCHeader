@class NSNumber;

@interface WCFinderSimplePlayerPlayParam : NSObject

@property (nonatomic) double startPlayTime;
@property (nonatomic) BOOL isSilencePlay;
@property (nonatomic) BOOL notLoopPlay;
@property (nonatomic) unsigned long long wcPlayerScene;
@property (nonatomic) BOOL isFullScreenViewScene;
@property (nonatomic) BOOL pauseVideo;
@property (retain, nonatomic) NSNumber *bForceUseThumbPlayer;
@property (retain, nonatomic) NSNumber *bRealTimeSnapshot;
@property (nonatomic) long long playerContentMode;
@property (nonatomic) BOOL isOpenAutoPictureInPicture;
@property (nonatomic) BOOL isKeepPictureInPictureStatusWhenPlayerStopped;
@property (retain, nonatomic) NSNumber *interruptedWhenAppResignActive;

+ (id)defaultParam;

- (void).cxx_destruct;

@end
