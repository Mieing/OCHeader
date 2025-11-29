@class NSString, UILabel, MMUIButton, UIView;
@protocol MMLiveCreateNoticeTimingOptionsCollectionViewCellDelegate;

@interface MMLiveCreateNoticeTimingOptionsCollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIView *descriptionContainerView;
@property (retain, nonatomic) UILabel *descriptionLabel;
@property (retain, nonatomic) MMUIButton *descriptionActionButton;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *descriptionText;
@property (retain, nonatomic) NSString *descriptionAccessibilityLabel;
@property (retain, nonatomic) NSString *descriptionActionLabel;
@property (nonatomic) BOOL enabled;
@property (weak, nonatomic) id<MMLiveCreateNoticeTimingOptionsCollectionViewCellDelegate> delegate;

+ (id)reuseId;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)accessibilityLabel;
- (id)accessibilityValue;
- (unsigned long long)accessibilityTraits;
- (void)setSelected:(BOOL)a0;
- (void)layoutSubviews;
- (void)onDescriptionActionButtonTapped;
- (void)updateStyle;
- (void).cxx_destruct;

@end
