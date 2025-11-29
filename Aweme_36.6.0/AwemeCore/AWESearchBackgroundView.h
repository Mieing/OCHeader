@class AWESearchBackgroundGradientView, AWESearchBackgroundModel;

@interface AWESearchBackgroundView : UIView

@property (retain, nonatomic) AWESearchBackgroundModel *backgroundModel;
@property (retain, nonatomic) AWESearchBackgroundGradientView *coverGradientView;
@property (readonly, nonatomic) BOOL hasBackgroundContent;
@property (nonatomic) BOOL fillImageView;
@property (nonatomic) BOOL needDefaultCoverGradientView;
@property (copy, nonatomic) id /* block */ updateLayerBlock;

- (void)themeDidChange:(id)a0;
- (void)configUIWithModel:(id)a0;
- (void)forceUpdateWithModel:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)addObserver;
- (void)layoutSubviews;
- (void)dealloc;
- (void)updateWithModel:(id)a0;

@end
