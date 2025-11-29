@class UIImageView, IESLiveSoloKTVVideoContainerV2, UIView, IESLiveSoloKTVTemplateSwitchItemModel;

@interface IESLiveSoloKTVTemplateSwitchCell : UICollectionViewCell

@property (retain, nonatomic) UIImageView *bottomIV;
@property (retain, nonatomic) UIView *maskingView;
@property (retain, nonatomic) IESLiveSoloKTVTemplateSwitchItemModel *model;
@property (retain, nonatomic) IESLiveSoloKTVVideoContainerV2 *playerView;
@property (copy, nonatomic) id /* block */ didPlayOrPauseBlock;
@property (copy, nonatomic) id /* block */ didSeekBlock;
@property (copy, nonatomic) id /* block */ didProgresseChangedBlock;

- (void)removeBlock;
- (void)updateCover;
- (void)showPlayBtn:(BOOL)a0;
- (void)seekAt:(double)a0 autoPlay:(BOOL)a1;
- (void)updateBlock:(id /* block */)a0 seekBlock:(id /* block */)a1 progressBlock:(id /* block */)a2;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)stop;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateModel:(id)a0;

@end
