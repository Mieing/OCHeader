@class DUXTextTag, AWEVideoCoverEvaluateModel, UILabel, UIView, BDImageView;

@interface EvaluateHeaderView : UICollectionReusableView

@property (retain, nonatomic) UIView *evaluateView;
@property (retain, nonatomic) UIView *suggestView;
@property (retain, nonatomic) BDImageView *imageView;
@property (retain, nonatomic) UIView *imageViewBG;
@property (retain, nonatomic) UILabel *imageScale;
@property (retain, nonatomic) UILabel *evaluateStatus;
@property (retain, nonatomic) UILabel *evaluateCaption;
@property (retain, nonatomic) UILabel *suggestTitle;
@property (retain, nonatomic) UILabel *suggestCaption;
@property (retain, nonatomic) DUXTextTag *suggestCount;
@property (retain, nonatomic) AWEVideoCoverEvaluateModel *evaluateModel;

- (void)updateView:(id)a0;
- (void)configSubViews;
- (void)setViewOngoing;
- (void)setViewFail;
- (void)setViewExcellent;
- (void)configEvaluateHeaderView;
- (void)setViewNormal;
- (void)setViewLow;
- (void)makeEvaluateViewConstraint:(BOOL)a0;
- (double)getSuggestHeaderHeight;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
