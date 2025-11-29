@class AWEScrollStringLabel, NSString, CAGradientLayer;

@interface AWEAIVideoClipMusicCollectionViewCell : AWEPhotoMusicEditorCollectionViewCell

@property (retain, nonatomic) AWEScrollStringLabel *scrollSrtingLabel;
@property (copy, nonatomic) NSString *musicName;
@property (retain, nonatomic) CAGradientLayer *fadeLayer;

- (void)setupOptimization;
- (void)updateFadeLayerColorWithCurrent:(BOOL)a0;
- (void)setIsCurrent:(BOOL)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (void)updateTitleViewState:(BOOL)a0 animated:(BOOL)a1;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)updateText:(id)a0;

@end
