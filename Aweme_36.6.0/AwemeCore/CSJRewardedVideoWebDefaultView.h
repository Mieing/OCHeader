@class UIButton, CSJMaterialMeta, UIImageView, CSJStarView, UILabel, CSJAdSlot;
@protocol CSJRewardedVideoWebDefaultViewDelegate;

@interface CSJRewardedVideoWebDefaultView : UIView

@property (retain, nonatomic) CSJMaterialMeta *materialMeta;
@property (retain, nonatomic) CSJAdSlot *slot;
@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) CSJStarView *starView;
@property (retain, nonatomic) UILabel *scoreLabel;
@property (retain, nonatomic) UIButton *downloadButton;
@property (retain, nonatomic) UIImageView *logoImageView;
@property (retain, nonatomic) UILabel *ADXLabel;
@property (nonatomic) BOOL isPortrait;
@property (weak, nonatomic) id<CSJRewardedVideoWebDefaultViewDelegate> delegate;

- (void)downloadButtonTapped;
- (void)logoImageViewAction;
- (void)layoutInterstitialStyle;
- (id)c_xyDict;
- (void)layoutFullScreenStyle;
- (double)scaleRatio;
- (void)endCardClickEvent;
- (void)addAccessibilityIdentifier;
- (id)initViewWithSlot:(id)a0 ad:(id)a1;
- (void)buildUpView;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)buttonText;

@end
