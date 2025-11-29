@class WCFinderMJSetDesignerView, UIImageView, WCFinderAuthInfoIconView, UILabel, UIButton;

@interface WCFinderMJSetHeaderView : UICollectionReusableView

@property (retain, nonatomic) UIImageView *coverView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIButton *contactLabel;
@property (retain, nonatomic) WCFinderAuthInfoIconView *authIconView;
@property (retain, nonatomic) UILabel *usedLabel;
@property (retain, nonatomic) UIButton *takePhotoButton;
@property (retain, nonatomic) UIButton *becomeCeatorButton;
@property (retain, nonatomic) WCFinderMJSetDesignerView *designerView;
@property (nonatomic) double horizontalPadding;

+ (double)displayHeightWithVM:(id)a0;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)getTakePhotoBtn;
- (void)setupViews;
- (void)layoutSubviews;
- (void)doLayout;
- (void)update:(id)a0;
- (void)addClickContactTarget:(id)a0 action:(SEL)a1;
- (void)addClickPostTarget:(id)a0 action:(SEL)a1;
- (void)addClickDesignerTarget:(id)a0 action:(SEL)a1;
- (void).cxx_destruct;

@end
