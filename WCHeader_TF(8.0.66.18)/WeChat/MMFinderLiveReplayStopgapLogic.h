@class MMFinderLiveReplayStopgapMediaItem, MMFinderLiveReplayStopgapPreloadRecord, MMLiveTaskId, FinderLiveReplayTransitionInfo, FinderLiveReplayTransitionPreloadInfo, MMFinderLiveReplayStopgapConfiguration;

@interface MMFinderLiveReplayStopgapLogic : NSObject

@property (retain, nonatomic) MMLiveTaskId *taskId;
@property (nonatomic) BOOL h265Capable;
@property (retain, nonatomic) MMFinderLiveReplayStopgapConfiguration *stopgapConfig;
@property (retain, nonatomic) MMFinderLiveReplayStopgapPreloadRecord *preloadRecord;
@property (nonatomic) BOOL preloadInvoked;
@property (retain, nonatomic) FinderLiveReplayTransitionInfo *stopgapInfo;
@property (retain, nonatomic) FinderLiveReplayTransitionPreloadInfo *preloadInfo;
@property (readonly, nonatomic) BOOL stopgapPresent;
@property (readonly, nonatomic) MMFinderLiveReplayStopgapMediaItem *preferredMediaItem;
@property (nonatomic) unsigned int currentLiveQuality;

+ (BOOL)stopgapInfoValid:(id)a0;

- (id)initWithTaskId:(id)a0;
- (void)updateWithStopgapInfo:(id)a0 preloadInfo:(id)a1;
- (void)tryStartPreload;
- (void)markPreloadCompleteWithPreloadRecord:(id)a0;
- (void)updateCurrentLiveQuality;
- (void).cxx_destruct;

@end
