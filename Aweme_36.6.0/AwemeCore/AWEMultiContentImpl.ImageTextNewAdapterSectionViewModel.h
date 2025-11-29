@class NSArray, AWEAwemeModel, AWEPageContext;
@protocol AFDAlbumPlayFinishTrackTriggerProtocol, AFDRichContentPageContextProtocol;

@interface AWEMultiContentImpl.ImageTextNewAdapterSectionViewModel : BDMultiContentContainer.ImageTextContentSectionViewModel <AFDAlbumPlayFinishTrackTriggerOwner, AFDRichContentBaseSectionViewModelProtocol, AFDAlbumSectionViewModelProtocol, AWERichContentAdapterBasic.RichContentProgressDraggable, AWEImageTextSectionViewModelProgressProtocol, AWEImageTextSectionViewModelProtocol, AFDRichContentLoopSectionViewModelProtocol> {
    void /* unknown type, empty encoding */ firstCellBackgroundColor;
    void /* unknown type, empty encoding */ isWaiting;
    void /* unknown type, empty encoding */ beginInternetSpeed;
    void /* unknown type, empty encoding */ firstFrameDuration;
    void /* unknown type, empty encoding */ firstFrameIndex;
    void /* unknown type, empty encoding */ firstImageOrigin;
    void /* unknown type, empty encoding */ hasLoadImageUris;
    void /* unknown type, empty encoding */ isRealyDisplayed;
    void /* unknown type, empty encoding */ musicPlay;
    void /* unknown type, empty encoding */ imageLoadTotalDuration;
    void /* unknown type, empty encoding */ imageLoadTotalDurationFeed;
    void /* unknown type, empty encoding */ graphicTotalPlaytime;
    void /* unknown type, empty encoding */ graphicImageLoadTotalPlaytime;
    void /* unknown type, empty encoding */ longLoadImageIndexs;
    void /* unknown type, empty encoding */ componentManager;
    void /* unknown type, empty encoding */ modernTransitionContext;
    void /* unknown type, empty encoding */ exposedImageURI;
    void /* unknown type, empty encoding */ graphicPlayState;
    void /* unknown type, empty encoding */ firstVisibleImageShow;
    void /* unknown type, empty encoding */ hasTrackedFirstImageLoad;
    void /* unknown type, empty encoding */ playStartTimestamp;
    void /* unknown type, empty encoding */ graphicPlayTimeFeed;
    void /* unknown type, empty encoding */ trackGraphicPlayTimeBlock;
    void /* unknown type, empty encoding */ trackGraphicPlayTimeFeedBlock;
    void /* unknown type, empty encoding */ fakeImageModel;
    void /* function */ trackNewAlbumPlayFinish;
    void /* function */ trackPlayFinishBlock;
}

@property (nonatomic, readonly) BOOL isPaused;
@property (nonatomic, readonly) NSArray *previewImages;
@property (nonatomic, readonly) AWEPageContext<AFDRichContentPageContextProtocol> *containerPageContext;
@property (nonatomic) BOOL isPinching;
@property (nonatomic) BOOL hasTrackedAlbumPlayFinish;
@property (nonatomic) BOOL hasTrackedCaptionPicShow;
@property (nonatomic) BOOL isPanning;
@property (nonatomic, readonly) long long itemCount;
@property (nonatomic, readonly) AWEAwemeModel *aweme;
@property (nonatomic, readonly) NSArray *albumImages;
@property (nonatomic) BOOL isProgressBarPressed;
@property (nonatomic, copy) id /* block */ trackNewAlbumPlayFinish;
@property (nonatomic, copy) id /* block */ trackPlayFinishBlock;
@property (nonatomic, retain) id<AFDAlbumPlayFinishTrackTriggerProtocol> finishTrackTrigger;

- (void)createFinishTrackTriggerIfNeeded;
- (void)resetFinishTrackTrigger;
- (id)currentImageModel;
- (void)trackGraphicPlayTimeFeedIfNeeded;
- (void)initializeGraphicPlayTimeFeed;
- (id)awemeModelForFinishTrackTrigger;
- (double)progressDuration;
- (void)initializePlayStartTimestamp;
- (void)trackGraphicPlayTimeIfNeeded;
- (double)totalPlayDuration:(BOOL)a0;
- (id)viewedImagesURI;
- (void)playOrPauseTimer:(BOOL)a0;
- (double)getCurrentLoadDurationAndClear;
- (void)setAlbumPlayStatePlay;
- (void).cxx_destruct;

@end
