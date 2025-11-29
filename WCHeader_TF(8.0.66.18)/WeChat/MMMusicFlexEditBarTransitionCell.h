@class UIImageView, UIImage, UIView;
@protocol MMMusicFlexEditBarTransitionCellDelegate;

@interface MMMusicFlexEditBarTransitionCell : MMUIView

@property (nonatomic) unsigned long long preIndex;
@property (nonatomic) unsigned long long nextIndex;
@property (retain, nonatomic) UIView *transitionImgContainerView;
@property (retain, nonatomic) UIImageView *transitionImgView;
@property (retain, nonatomic) UIImage *transitionImgForModify;
@property (retain, nonatomic) UIImage *transitionImgForNotModify;
@property (weak, nonatomic) id<MMMusicFlexEditBarTransitionCellDelegate> delegate;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)internalInit;
- (void)updateWithPreIndex:(unsigned long long)a0 nextIndex:(unsigned long long)a1 isModify:(BOOL)a2;
- (void)setTransitionIconHidden:(BOOL)a0;
- (void)layoutSubviews;
- (void)onTapGes:(id)a0;
- (void).cxx_destruct;

@end
