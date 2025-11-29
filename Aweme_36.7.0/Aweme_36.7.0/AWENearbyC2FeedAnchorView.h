@class AWEGradientView, AWEAwemeModel, UIImageView, UIVisualEffectView, UILabel, AWENearbyPaddingLabel, UIView;

@interface AWENearbyC2FeedAnchorView : UIView

@property (retain, nonatomic) UILabel *anchorTextLabel;
@property (retain, nonatomic) UILabel *anchorIconLabel;
@property (retain, nonatomic) UIImageView *anchorIcon;
@property (retain, nonatomic) UIImageView *groupIcon;
@property (retain, nonatomic) AWENearbyPaddingLabel *adLabel;
@property (retain, nonatomic) UIVisualEffectView *effectView;
@property (retain, nonatomic) UIView *seperatorLine;
@property (retain, nonatomic) UIImageView *spLineImg;
@property (retain, nonatomic) AWEGradientView *anchorGradientView;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (retain, nonatomic) UIView *viewClickHandlView;

- (void)shouldHiddenAdLabel:(BOOL)a0;
- (void)setUpUIWithAnchorInfo:(id)a0 videoAttr:(id)a1;
- (void)layoutDefaultWithAnchorInfo:(id)a0 videoAttr:(id)a1;
- (void)layoutUIStyle1WithAnchorInfo:(id)a0 videoAttr:(id)a1;
- (void)layoutAnchorLabelWithAnchorInfo:(id)a0 videoAttr:(id)a1;
- (void)layoutAnchorNameWithAnchorInfo:(id)a0 videoAttr:(id)a1;
- (void)layoutAdTagUIWihtVideoAttr:(id)a0;
- (void)layoutGroupIconUIWihtAnchorInfo:(id)a0 videoAttr:(id)a1;
- (void)layoutAnchorIconTextWithAnchorInfo:(id)a0 videoAttr:(id)a1;
- (void)setupAnchorLabelWithAnchorInfo:(id)a0 videoAttr:(id)a1;
- (BOOL)showGroupIcon:(id)a0;
- (void)setupAnchorTextLabelWithAnchorInfo:(id)a0 videoAttr:(id)a1;
- (void)updateInfoWithModel:(id)a0;
- (void)updateInfoWithAnchorModel:(id)a0 videoAttr:(id)a1 model:(id)a2;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
