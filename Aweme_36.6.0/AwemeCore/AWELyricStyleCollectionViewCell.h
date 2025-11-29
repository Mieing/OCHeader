@class AWEScrollStringLabel, UIImageView, IESEffectModel, BDImageView;

@interface AWELyricStyleCollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) UIImageView *downloadIcon;
@property (retain, nonatomic) UIImageView *loadingIcon;
@property (retain, nonatomic) AWEScrollStringLabel *titleLabel;
@property (retain, nonatomic) BDImageView *effectImageView;
@property (nonatomic) double lastTimeRunAnimation;
@property (retain, nonatomic) IESEffectModel *currentEffectModel;
@property (readonly, nonatomic) BOOL isCurrent;

- (void)p_startLoadingAnimation;
- (void)showLoadingAnimation:(BOOL)a0;
- (id)createRotationAnimation;
- (void)p_stopLoadingAnimation;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (void)updateText:(id)a0;
- (void)setIsCurrent:(BOOL)a0;

@end
