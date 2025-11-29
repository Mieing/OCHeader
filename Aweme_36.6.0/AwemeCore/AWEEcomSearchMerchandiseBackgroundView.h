@class AWESearchBackgroundModel;

@interface AWEEcomSearchMerchandiseBackgroundView : UIView

@property (retain, nonatomic) AWESearchBackgroundModel *backgroundModel;
@property (readonly, nonatomic) BOOL hasBackgroundContent;
@property (nonatomic) BOOL fillImageView;
@property (copy, nonatomic) id /* block */ updateLayerBlock;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)updateWithModel:(id)a0;

@end
