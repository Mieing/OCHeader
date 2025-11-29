@class NSString, UIImageView, AWEPaymentBadgeView, UILabel;

@interface AWEMixVideoPanelMoreView : UIView <AWEMixVideoPanelMoreViewProtocol>

@property (retain, nonatomic) UILabel *moreLabel;
@property (retain, nonatomic) UIImageView *arrowImageView;
@property (retain, nonatomic) UIImageView *mixIconImageView;
@property (retain, nonatomic) UILabel *updateCountLabel;
@property (retain, nonatomic) UILabel *totalCountLabel;
@property (retain, nonatomic) AWEPaymentBadgeView *paymentBadgeView;
@property (retain, nonatomic) UILabel *contentLabel;
@property (retain, nonatomic) UILabel *animatedLabel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEPlayInteractionAdapterClass;
+ (Class)aAWEMixVideoPanelMoreViewAdapterClass;

- (void)layoutSubviews;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)configureUI;
- (id)aAWEPlayInteractionAdapter;
- (void)refreshModel:(id)a0;
- (BOOL)shouldShowPaymentTagView:(id)a0;
- (void)refreshModel:(id)a0 showMixInfoTag:(BOOL)a1;
- (id)aAWEMixVideoPanelMoreViewAdapter;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
