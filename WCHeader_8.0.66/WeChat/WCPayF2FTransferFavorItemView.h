@class UIColor, NSString, UIImageView, UIAccessibilityElement, UILabel, UIView, UIImage;
@protocol WCPayF2FTransferFavorItemViewDelegate;

@interface WCPayF2FTransferFavorItemView : UIView

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIImageView *infoButton;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (retain, nonatomic) UIImageView *accessoryView;
@property (retain, nonatomic) UIView *separator;
@property (retain, nonatomic) UIAccessibilityElement *selfAccssbilityElement;
@property (retain, nonatomic) UIAccessibilityElement *infoButtonAccssbilityElement;
@property (retain, nonatomic) UIImage *iconImage;
@property (retain, nonatomic) NSString *title;
@property (nonatomic) BOOL showInfoButton;
@property (retain, nonatomic) NSString *subTitle;
@property (nonatomic) unsigned long long accessoryType;
@property (nonatomic) BOOL showSeparator;
@property (nonatomic) BOOL enabled;
@property (retain, nonatomic) UIColor *titleColor;
@property (retain, nonatomic) UIColor *subTitleColor;
@property (nonatomic) BOOL checkState;
@property (weak, nonatomic) id<WCPayF2FTransferFavorItemViewDelegate> delegate;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupSubviews;
- (void)configureLayout;
- (void)sizeToFit;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })currentAccessorySize;
- (id)currentAccessoryImage;
- (void)handleTap:(id)a0;
- (void)handleHighlightWithTouchLocation:(struct CGPoint { double x0; double x1; })a0;
- (void)dismissHighlight;
- (BOOL)considerLocationInInfoButton:(struct CGPoint { double x0; double x1; })a0;
- (id)selectedCheckboxImage;
- (id)unselectedCheckboxImage;
- (id)disabledCheckboxImage;
- (BOOL)isAccessibilityElement;
- (long long)accessibilityElementCount;
- (id)accessibilityElementAtIndex:(long long)a0;
- (long long)indexOfAccessibilityElement:(id)a0;
- (void).cxx_destruct;

@end
