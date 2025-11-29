@class UILabel, UIImageView, UIView;
@protocol AWEPlayVideoAbstractBottomComponentDelegate;

@interface AWEPlayVideoAbstractBottomComponent : UICollectionReusableView

@property (retain, nonatomic) UILabel *label;
@property (retain, nonatomic) UIView *leftLine;
@property (retain, nonatomic) UIView *rightLine;
@property (retain, nonatomic) UIImageView *hintIconImv;
@property (weak, nonatomic) id<AWEPlayVideoAbstractBottomComponentDelegate> delegate;

- (void)hintIconImgaeViewTouched;
- (void)setBottomText:(id)a0 interactionEnabled:(BOOL)a1;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
