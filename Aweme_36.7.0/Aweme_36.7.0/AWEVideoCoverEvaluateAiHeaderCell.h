@class UILabel, AWEVideoCoverEvaluateModel, BDImageView;

@interface AWEVideoCoverEvaluateAiHeaderCell : UICollectionViewCell

@property (retain, nonatomic) BDImageView *coverImageView;
@property (retain, nonatomic) UILabel *evaluateStatusLabel;
@property (retain, nonatomic) UILabel *evaluateCaptionLabel;
@property (retain, nonatomic) AWEVideoCoverEvaluateModel *evaluateModel;
@property (nonatomic) BOOL isLandscape;

- (void)initSubViews;
- (void)configSubViews;
- (void)updateEvaluateStatus:(id)a0;
- (void)makeEvaluateViewConstraint;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
