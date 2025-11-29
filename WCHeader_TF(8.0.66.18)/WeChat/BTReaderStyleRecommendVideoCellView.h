@class BTReaderStyleRecommendVideoCellViewModel, CAGradientLayer, SightIconView, UIView, BTVideoItemCellAutoPlayerView, MMUILabel;

@interface BTReaderStyleRecommendVideoCellView : BTReaderStyleRecommendMsgCellView {
    UIView *m_playerBtnContainerView;
    SightIconView *m_playIconView;
    MMUILabel *m_timeLabel;
    MMUILabel *m_autoPlayVideoTimeLabel;
    CAGradientLayer *m_autoPlayVideoTitleMaskLayer;
    BTVideoItemCellAutoPlayerView *m_lastAddedPlayerView;
}

@property (readonly, nonatomic) BTReaderStyleRecommendVideoCellViewModel *viewModel;

- (void)initSubviews;
- (void)onUpdateViewModel;
- (void)initPlayIconView;
- (void)initTimeLabel;
- (void)updateTitleView:(BOOL)a0;
- (void)layoutLargeCoverItem;
- (void)layoutNormalCoverItem;
- (void)updateViewByVideoAutoPlayStatus;
- (void)initVideoPlayerView;
- (void)initVideoTimeLabel;
- (void)initVideoPlayTitleCoverMaskLayer;
- (void)updateVideoTimeLabel;
- (void)setVideoPlayTitleCoverMaskLayer;
- (void)removeVideoPlayTitleCoverMaskLayer;
- (void)updateViewWhenStatusIsPlay;
- (void)updateViewWhenStatusIsDestory;
- (void)doAnimationFromCoverImageToVideoPlayerView;
- (void)onVideoPlayerBeginBuffering;
- (void)onVideoPlayerPlay;
- (void)onVideoPlayerPrepareToPlay;
- (void)resetLastAddedPlayerView;
- (id)getTimeLabelAccessibilityLabel;
- (id)accessibilityLabel;
- (void).cxx_destruct;

@end
