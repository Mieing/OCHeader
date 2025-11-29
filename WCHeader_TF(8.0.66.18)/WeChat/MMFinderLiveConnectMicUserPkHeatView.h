@class MMLiveGradientLayerView, CAGradientLayer, UIImageView, MMFinderLiveConnectMicPkTeam, UILabel, UIView, MMFinderLiveConnectMicPkUser;
@protocol MMFinderLiveConnectMicUserPkHeatViewDelegate;

@interface MMFinderLiveConnectMicUserPkHeatView : UIView

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) MMLiveGradientLayerView *circleRankView;
@property (retain, nonatomic) UILabel *rankLabel;
@property (retain, nonatomic) UIImageView *designatedGiftThumbnailView;
@property (retain, nonatomic) UILabel *heatLabel;
@property (retain, nonatomic) MMFinderLiveConnectMicPkTeam *team;
@property (retain, nonatomic) MMFinderLiveConnectMicPkUser *user;
@property (retain, nonatomic) CAGradientLayer *containerGradientLayer;
@property (nonatomic) BOOL isSelfAnchorTeam;
@property (nonatomic) BOOL smallMode;
@property (weak, nonatomic) id<MMFinderLiveConnectMicUserPkHeatViewDelegate> delegate;

+ (double)heightWithSmallMode:(BOOL)a0;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)initViews;
- (void)layoutSubviews;
- (void)updateWithPkTeam:(id)a0 uiConf:(id)a1 pkUser:(id)a2 isSelfAnchorTeam:(BOOL)a3 showRank:(BOOL)a4 designatedGiftItem:(id)a5 smallMode:(BOOL)a6;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)onTapped;
- (void).cxx_destruct;

@end
