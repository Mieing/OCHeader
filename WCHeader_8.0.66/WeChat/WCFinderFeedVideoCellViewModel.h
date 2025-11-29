@class NSNumber, NSDictionary, WCPlayerPlaybackInfo;

@interface WCFinderFeedVideoCellViewModel : NSObject

@property (nonatomic) BOOL hideErrorTipsView;
@property (nonatomic) BOOL hideOriginalContactView;
@property (nonatomic) BOOL forceUseSystemPlayer;
@property (nonatomic) unsigned long long maxBitRate;
@property (nonatomic) unsigned long long startPlayTimestampInMS;
@property (nonatomic) BOOL forceResumePlaying;
@property (nonatomic) BOOL ignoreGlobalResumePlaying;
@property (nonatomic) BOOL isPauseBeforeStopPlay;
@property (nonatomic) double playbackRate;
@property (retain, nonatomic) NSNumber *currentStartPlayPosition;
@property (retain, nonatomic) NSNumber *currentPlayHistoryVersion;
@property (nonatomic) double playPositionBeforeStopPlay;
@property (nonatomic) BOOL downloadSuccessful;
@property (nonatomic) BOOL notifyOthersAudioModule;
@property (copy, nonatomic) NSDictionary *fpsInfo;
@property (retain, nonatomic) NSNumber *scrollFeedTimestamp;
@property (retain, nonatomic) NSNumber *lastDragProgressbarTimestamp;
@property (weak, nonatomic) WCPlayerPlaybackInfo *currentPlayBackInfo;

- (double)realPlayTime;
- (void).cxx_destruct;

@end
