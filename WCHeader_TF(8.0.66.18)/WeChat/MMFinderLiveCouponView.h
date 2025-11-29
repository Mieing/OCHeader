@class MMUIButton, NSString, UIView, UILabel, MMFinderLiveCouponItem;
@protocol MMFinderLiveCouponViewDelegate;

@interface MMFinderLiveCouponView : MMUIView <MMFinderLiveCouponViewProtocol>

@property (nonatomic) BOOL isAnchor;
@property (retain, nonatomic) MMFinderLiveCouponItem *couponItem;
@property (retain, nonatomic) UIView *leftContainer;
@property (retain, nonatomic) UILabel *discountLabel;
@property (retain, nonatomic) UILabel *discountDescLabel;
@property (retain, nonatomic) UIView *centerContainer;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *remainLabel;
@property (retain, nonatomic) UILabel *descLabel;
@property (retain, nonatomic) MMUIButton *actionButton;
@property (weak, nonatomic) id<MMFinderLiveCouponViewDelegate> delegate;
@property (nonatomic) BOOL actionButtonHidden;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 isAnchor:(BOOL)a1;
- (void)fillWithCouponItem:(id)a0;
- (void)setupDiscountLabel:(id)a0;
- (void)setupCenterLabel:(id)a0;
- (void)setupActionButton:(id)a0;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)layoutLeftContent;
- (void)layoutCenterContent;
- (void)layoutRightContent;
- (void)updateActionButton:(BOOL)a0 active:(BOOL)a1 title:(id)a2;
- (void)onActionButtonClicked;
- (void).cxx_destruct;

@end
