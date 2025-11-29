@class WCFinderAuthorContactRecommendView, MMWebImageView, WCFinderFeedContentVM, UIView, _TtC6WeChat25WCFinderSimpleProgressBar, NSString, WCFinderSimplePlayerView, CAGradientLayer, RichTextView, WCFinderFriendLikeCustomInfoView, UILabel, MMUIButton;
@protocol WCFinderLongVideoListCellDelegate;

@interface WCFinderLongVideoListCell : UICollectionViewCell <WCFinderFeedContentMediaActionProtocol, WCFinderGlobalPlaybackInfoExt>

@property (retain, nonatomic) WCFinderFeedContentVM *contentVM;
@property (retain, nonatomic) UILabel *recommendReasonLabel;
@property (retain, nonatomic) WCFinderFriendLikeCustomInfoView *friendLikeInfoView;
@property (retain, nonatomic) WCFinderAuthorContactRecommendView *contactView;
@property (retain, nonatomic) RichTextView *titleContentView;
@property (retain, nonatomic) MMWebImageView *feedImageView;
@property (retain, nonatomic) UILabel *timeLabel;
@property (retain, nonatomic) WCFinderSimplePlayerView *playerView;
@property (nonatomic) struct WCShowArea { double x_p; double y_p; double w_p; double h_p; } playerViewShowArea;
@property (retain, nonatomic) CAGradientLayer *bottomGradientLayer;
@property (nonatomic) unsigned long long playStartTsInMs;
@property (nonatomic) double startVideoPlayTime;
@property (retain, nonatomic) MMWebImageView *fullFeedImageView;
@property (retain, nonatomic) UIView *fullFeedImageViewContainer;
@property (retain, nonatomic) UIView *playerContainerView;
@property (retain, nonatomic) _TtC6WeChat25WCFinderSimpleProgressBar *progressBar;
@property (retain, nonatomic) UIView *seperateLine;
@property (retain, nonatomic) MMUIButton *landscapeButton;
@property (nonatomic) BOOL needCallbackAutoPlay;
@property (weak, nonatomic) id<WCFinderLongVideoListCellDelegate> delegate;
@property (retain, nonatomic) NSString *playSessionId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (void)setUpUI;
- (void)updateContentVM:(id)a0 showSeperateLine:(BOOL)a1;
- (struct CGSize { double x0; double x1; })getCellSizeWithContentVM:(id)a0 showSeperateLine:(BOOL)a1 maxSize:(struct CGSize { double x0; double x1; })a2;
- (void)layoutSubviews;
- (double)mylayout;
- (void)onLongPress:(id)a0;
- (void)startPlay;
- (void)stopPlay;
- (id /* block */)fakeStopPlay;
- (BOOL)currentPlaying;
- (double)currentVideoPlayTime;
- (unsigned long long)realPlayTimeInMs;
- (long long)maxProgress;
- (int)getCommentScene;
- (id)showingRecommendReason;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })coverPosition;
- (id)coverSnapshot;
- (void)onVideoUpdatePosition:(double)a0 videoDuration:(double)a1 maxPlayVideoTime:(double)a2;
- (void)updateTimeLabel:(int)a0;
- (void)onFeedContent:(id)a0 likedDataChanged:(id)a1;
- (void)onGlobalPlaybackInfoUpdatedWithTid:(id)a0 playInfo:(id)a1;
- (void).cxx_destruct;

@end
