@class UIView, NSString, UIImageView, UILabel, AWEIMCardMessageAnchorViewModel, AWEIMHighlightControl;
@protocol IESIMFeedMessageAnchorViewDelegate;

@interface AWEIMCardMessageAnchorView : UIView <IESIMCardMessageAnchorViewProtocol>

@property (retain, nonatomic) AWEIMCardMessageAnchorViewModel *viewModel;
@property (retain, nonatomic) AWEIMHighlightControl *highlightControl;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIView *lineView;
@property (retain, nonatomic) UILabel *subtitleLabel;
@property (retain, nonatomic) UILabel *priceLabel;
@property (retain, nonatomic) UILabel *priceIconLabel;
@property (weak, nonatomic) id<IESIMFeedMessageAnchorViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)anchorPlaceholderHeightForMessage:(id)a0;
+ (double)anchorHeightForMessage:(id)a0;

- (void)__setupUI;
- (void)__handleTapGesture:(id)a0;
- (void)__setupBindWithViewModel:(id)a0;
- (void)__configDefaultWithViewModel:(id)a0;
- (void)__configCommercePriceWithViewModel:(id)a0;
- (void)__configCommerceDecisionWithViewModel:(id)a0;
- (void)__configPineappleWithViewModel:(id)a0;
- (void)__setupIconModel:(id)a0 viewModel:(id)a1;
- (void)updateBackgroundColorWithHasBackgroundImg:(BOOL)a0;
- (void)configWithViewModel:(id)a0;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;

@end
