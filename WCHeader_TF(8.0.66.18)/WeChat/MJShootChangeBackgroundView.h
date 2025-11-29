@class MMUIButton;
@protocol MJShootChangeBackgroundViewDelegate;

@interface MJShootChangeBackgroundView : UIView

@property (retain, nonatomic) MMUIButton *changeButton;
@property (retain, nonatomic) MMUIButton *deleteButton;
@property (weak, nonatomic) id<MJShootChangeBackgroundViewDelegate> delegate;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupView;
- (void)changeButtonDidTouchUpInside:(id)a0;
- (void)deleteButtonDidTouchUpInside:(id)a0;
- (void)showDeleteEntry;
- (void)hideDeleteEntry;
- (void).cxx_destruct;

@end
