@class NSString, BTVideoItemCellAutoPlayerView, BTVideoItemCellAutoPlayReporter;

@interface BTVideoItemCellViewModel : BTReaderItemCellViewModel <BTVideoItemCellAutoPlayerDelegate, BTItemCellViewModelVideoPlayProtocol> {
    BOOL m_gotUrl;
    BOOL m_isGettingUrl;
    NSString *m_videoUrl;
    unsigned long long m_videoUrlExpiredTime;
}

@property (retain, nonatomic) NSString *timeStr;
@property (nonatomic) BOOL isVideoCoveredByTitlePlaying;
@property (readonly, nonatomic) unsigned long long status;
@property (nonatomic) BOOL isPrepareToPlay;
@property (nonatomic) BOOL videoHasBeganBuffering;
@property (retain, nonatomic) BTVideoItemCellAutoPlayerView *autoPlayerView;
@property (retain, nonatomic) BTVideoItemCellAutoPlayReporter *reporter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreateViewModelWithReaderWrap:(id)a0 msgWrap:(id)a1;

- (id)itemViewClassName;
- (void)updateVideoAutoPlayStatusByAction:(unsigned long long)a0;
- (id)titleFont;
- (unsigned long long)titleLineNumber;
- (double)titleMaxWidth;
- (double)viewHeight;
- (id)friendsReadStr;
- (id)remainTimeStrWithPlayedTime;
- (id)timeStrWithDurationInSeconds:(unsigned long long)a0;
- (void)initVideoPlayerView;
- (void)startVideoPlayerViewWithInitialTime;
- (void)playVideoPlayerView;
- (void)pauseVideoPlayerView;
- (void)stopVideoPlayerView;
- (void)destoryVideoPlayerView;
- (void)resetVideoPlayerView;
- (double)getCurrentPlayedTime;
- (id)syncCaptureVideo;
- (void)onVideoPlay:(unsigned int)a0;
- (void)onVideoBeginBuffering:(unsigned int)a0;
- (void)onVideoEndBuffering:(unsigned int)a0;
- (void)onVideoPrepareToPlay:(unsigned int)a0;
- (void)onVideoPause:(unsigned int)a0;
- (id)genBTVideoItemCellAutoPlayReportData;
- (BOOL)canAutoPlay;
- (id)autoPlayDescription;
- (void)initVideo;
- (void)playVideo;
- (void)pauseVideo;
- (void)destoryVideo;
- (id)getCellView;
- (id)getVideoView;
- (unsigned long long)getIndexForMsgSectionData;
- (void).cxx_destruct;

@end
