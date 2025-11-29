@class UIView, IESECMatchPurchaseShopModel, UILabel, IESECUIButton, IESECUIImageView;
@protocol IESECMatchPurchaseNavigationBarDelegate;

@interface IESECMatchPurchaseNavigationBar : UIView

@property (retain, nonatomic) IESECUIButton *backButton;
@property (retain, nonatomic) IESECUIImageView *shopImageView;
@property (retain, nonatomic) UILabel *shopNameLabel;
@property (retain, nonatomic) UIView *matchPurchaseView;
@property (retain, nonatomic) UILabel *allMatchPurchaseLabel;
@property (retain, nonatomic) IESECUIImageView *arrowImageView;
@property (weak, nonatomic) id<IESECMatchPurchaseNavigationBarDelegate> delegate;
@property (retain, nonatomic) IESECMatchPurchaseShopModel *model;

- (void)didTapBackButton;
- (void)clickToAllMatchPurchase;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
