@class BTVideoItemCellAutoPlayerView, BTVideoItemCellAutoPlayReporter, NSString;

@interface BTReaderStyleRecommendVideoCellViewModel : BTReaderStyleRecommendMsgCellViewModel <BTVideoItemCellAutoPlayerDelegate, BTItemCellViewModelVideoPlayProtocol> {
    BOOL m_gotUrl;
    BOOL m_isGettingUrl;
    NSString *m_videoUrl;
    unsigned long long m_videoUrlExpiredTime;
}

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

+ (BOOL)canCreateViewModelWithSectionData:(id)a0 accountIndex:(unsigned int)a1 appMsgIndex:(unsigned int)a2;

- (id)itemViewClassName;
- (id)timeStr;
- (struct CGSize { double x0; double x1; })coverImageViewSize;
- (id)titleFont;
- (unsigned long long)titleLineNumber;
- (double)titleMaxWidth;
- (id)remainTimeStrWithPlayedTime;
- (double)getCurrentPlayedTime;
- (id)syncCaptureVideo;
- (void)initVideoPlayerView;
- (void)startVideoPlayerViewWithInitialTime;
- (void)playVideoPlayerView;
- (void)pauseVideoPlayerView;
- (void)stopVideoPlayerView;
- (void)destoryVideoPlayerView;
- (void)resetVideoPlayerView;
- (void)onVideoPlay:(unsigned int)a0;
- (void)onVideoBeginBuffering:(unsigned int)a0;
- (void)onVideoEndBuffering:(unsigned int)a0;
- (void)onVideoPrepareToPlay:(unsigned int)a0;
- (void)onVideoPause:(unsigned int)a0;
- (void)updateVideoAutoPlayStatusByAction:(unsigned long long)a0;
- (id)genBTRecommendVideoItemCellAutoPlayReportData;
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
