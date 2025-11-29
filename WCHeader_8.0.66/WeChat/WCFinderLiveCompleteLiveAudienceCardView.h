@class WCFinderSimplePlayerView, NSString, MMLiveCDNPlayerView, MMUIView, WCFinderDataItem, MMUIButton, UILabel;

@interface WCFinderLiveCompleteLiveAudienceCardView : UIView <WCFinderFeedImageCDNViewDelegate, MMLiveCDNPlayerViewDelegate, WCFinderFeedContentMediaActionProtocol>

@property (nonatomic) unsigned long long type;
@property (retain, nonatomic) WCFinderDataItem *liveDataItem;
@property (retain, nonatomic) WCFinderDataItem *replayDataItem;
@property (retain, nonatomic) MMUIView *contentView;
@property (retain, nonatomic) MMUIButton *actionButton;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) MMLiveCDNPlayerView *livePlayerView;
@property (retain, nonatomic) WCFinderSimplePlayerView *replayPlayerView;
@property (retain, nonatomic) MMUIButton *playButton;
@property (nonatomic) BOOL isLimitMode;
@property (copy, nonatomic) id /* block */ actionBlock;
@property (copy, nonatomic) id /* block */ onLiveAudienceCardViewPlayBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)finderFeedImageLoadFinish;
- (void)updateRecomendPlaying:(BOOL)a0;
- (void)updateAudienceCardViewWithType:(unsigned long long)a0 liveDataItem:(id)a1 replayDataItem:(id)a2 isLimitMode:(BOOL)a3;
- (void)playLive;
- (void)onPlayEnd;
- (void)playReplay;
- (void)onPlayerStateChanged:(unsigned long long)a0;
- (void)dealloc;
- (void)viewWillAppear;
- (void)layoutSubviews;
- (void)createUI;
- (void)actionButtonClick;
- (void)layoutUI;
- (double)getHeightFromWidth:(double)a0;
- (void).cxx_destruct;

@end
