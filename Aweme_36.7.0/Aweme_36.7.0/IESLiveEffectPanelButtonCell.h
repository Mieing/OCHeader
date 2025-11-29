@class UIButton, IESLiveFaceEffectButtonModel;

@interface IESLiveEffectPanelButtonCell : UICollectionViewCell

@property (retain, nonatomic) IESLiveFaceEffectButtonModel *buttonModel;
@property (retain, nonatomic) UIButton *button;
@property (nonatomic) long long btnIndex;

- (void)updateSelected:(BOOL)a0;
- (void)configPanelButton;
- (void)updateImage:(id)a0 btnIndex:(long long)a1;
- (void)updateWithModel:(id)a0 btnIndex:(long long)a1;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;

@end
