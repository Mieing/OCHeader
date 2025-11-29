@class UIStackView, TextStateIcon, MMWebImageView, UIView, MMUILabel;

@interface TextStatePublishRecentUseIconItemView : UICollectionViewCell

@property (retain, nonatomic) UIStackView *stackView;
@property (retain, nonatomic) MMWebImageView *iconImageView;
@property (retain, nonatomic) MMUILabel *iconDescriptionLabel;
@property (retain, nonatomic) UIView *separatorView;
@property (copy, nonatomic) id /* block */ deleteHandler;
@property (retain, nonatomic) TextStateIcon *icon;

+ (double)horizonPadding;
+ (double)height;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)prepareForReuse;
- (void)initSubviews;
- (void)initLayout;
- (void)layoutSubviews;
- (BOOL)canBecomeFirstResponder;
- (BOOL)canPerformAction:(SEL)a0 withSender:(id)a1;
- (void)onDelete:(id)a0;
- (void)onLongPressToDelete;
- (void)applyLayoutAttributes:(id)a0;
- (id)preferredLayoutAttributesFittingAttributes:(id)a0;
- (void)setHighlighted:(BOOL)a0;
- (void).cxx_destruct;

@end
