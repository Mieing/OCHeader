@class BrandMyTabEntranceCardHeader, BrandMyTabEntranceCardNotify, BrandMyTabEntranceCardButtons, UIView;
@protocol BrandMyTabEntranceCardDelegate;

@interface BrandMyTabEntranceCardView : UIView

@property (retain, nonatomic) BrandMyTabEntranceCardHeader *headerView;
@property (retain, nonatomic) BrandMyTabEntranceCardNotify *notifyView;
@property (retain, nonatomic) UIView *horizontalSeparator;
@property (retain, nonatomic) BrandMyTabEntranceCardButtons *buttonsView;
@property (weak, nonatomic) id<BrandMyTabEntranceCardDelegate> delegate;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)headerPressed;
- (void)notifyPressed;
- (void)editPicturePressed;
- (void)editTextPressed;
- (void)setUpLayout;
- (void)setUpViews;
- (void)layoutSubviews;
- (void)updateContentWithCardInfo:(id)a0 reportInfo:(id)a1;
- (void).cxx_destruct;

@end
