@class UIImageView, MBCircularProgressBarView, UIView, AWEPublishBaseTask;

@interface AFDStoryWorkListPublishProgressCell : UICollectionViewCell

@property (retain, nonatomic) UIView *bgMaskView;
@property (retain, nonatomic) UIImageView *coverImageView;
@property (retain, nonatomic) MBCircularProgressBarView *loadingCircleView;
@property (retain, nonatomic) AWEPublishBaseTask *task;

- (void)initView;
- (void)configWithTask:(id)a0;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)updateProgress;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)applyLayoutAttributes:(id)a0;

@end
