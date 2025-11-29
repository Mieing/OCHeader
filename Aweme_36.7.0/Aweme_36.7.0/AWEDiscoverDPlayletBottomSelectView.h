@class UIStackView, NSMutableDictionary, UIImageView, AWEPaymentBadgeView, UILabel, AWEPlayletInfoModel, UIView;

@interface AWEDiscoverDPlayletBottomSelectView : UIView

@property (retain, nonatomic) AWEPlayletInfoModel *model;
@property (retain, nonatomic) UIStackView *stackView;
@property (retain, nonatomic) UILabel *contentLabel;
@property (retain, nonatomic) UILabel *countLabel;
@property (retain, nonatomic) UIImageView *arrowImageView;
@property (retain, nonatomic) UIImageView *playletIconImageView;
@property (retain, nonatomic) UIImageView *tagImageView;
@property (retain, nonatomic) AWEPaymentBadgeView *paymentBadgeView;
@property (retain, nonatomic) UIImageView *playletTipImageView;
@property (retain, nonatomic) NSMutableDictionary *shouldShowPlayletTipImageViewDic;
@property (retain, nonatomic) UIView *placeholderView;

+ (Class)aAWEDiscoverDPlayletBottomViewAdapterClass;

- (void)configureUI;
- (void)updateUIWithModel:(id)a0;
- (id)contentLabelFont;
- (BOOL)shouldShowPaymentTagView:(id)a0;
- (Class)largeFontAdaptUtilClass;
- (BOOL)enableAdaptLargeFontMode;
- (id)aAWEDiscoverDPlayletBottomViewAdapter;
- (struct CGSize { double x0; double x1; })playletIconSize;
- (double)contentLabelHeight;
- (double)countLabelHeight;
- (id)playletIconImage:(id)a0;
- (void)updateUIToEntranceStyle;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })tipIconPosOnBottomButton;
- (void)showTipIconWithAnimation:(BOOL)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)countLabelFont;

@end
