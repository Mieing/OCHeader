@class AWESearchVideoView, UIImageView, AWESearchMerchandiseGoodsInfoView, UILabel, UIView;
@protocol AWESearchLiveViewProtocol;

@interface AWESearchMerchandiseLiveBaseCell : AWESearchOptimizeGoodsCell

@property (retain, nonatomic) UIView<AWESearchLiveViewProtocol> *liveView;
@property (retain, nonatomic) UIImageView *liveTagView;
@property (retain, nonatomic) UIView *liveIconView;
@property (retain, nonatomic) UIImageView *liveIcon;
@property (retain, nonatomic) UILabel *liveLabel;
@property (retain, nonatomic) AWESearchVideoView *videoView;
@property (retain, nonatomic) AWESearchMerchandiseGoodsInfoView *infoView;

+ (id)identifier;

- (double)currPlaybackTime;
- (void)configWithModel:(id)a0;
- (void)setCurrPlaybackTime:(double)a0;
- (id)livePlayerView;
- (void)setActionRecord:(id)a0;
- (id)getAwemeModel;
- (void)videoStopAndFree;
- (void)videoInit;
- (id)getTrackerParams;
- (void)updateTagViewWithModel:(id)a0;
- (void)livePlayerStopAndFree;
- (void)livePlayerInit;
- (void)didBecomeActive;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)didResignActive;
- (void)layoutSubviews;
- (id)activeView;
- (BOOL)canPlayVideo;
- (void)resetPlayer;
- (id)livePlayer;

@end
