@class HTSLiveScorllLabelView, HTSLiveRoom, IESLiveFeedDrawerRelationGuideHeadView;

@interface IESLiveFeedDrawerRelationGuideView : UIView

@property (retain, nonatomic) IESLiveFeedDrawerRelationGuideHeadView *anchorView;
@property (retain, nonatomic) HTSLiveScorllLabelView *titleLabel;
@property (retain, nonatomic) HTSLiveRoom *room;
@property (nonatomic) long long total;
@property (nonatomic) BOOL prepareAnimate;

- (BOOL)enableDeleteIcon;
- (BOOL)_shouldShowHeadView;
- (void)config:(id)a0 total:(long long)a1;
- (void)startAnimation;
- (void).cxx_destruct;
- (void)clear;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)setupViews;

@end
