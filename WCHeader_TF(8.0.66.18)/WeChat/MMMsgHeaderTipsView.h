@class UIColor, NSArray, UIImageView, UIImage, UILabel, NSString, UIButton;
@protocol MMMsgHeaderTipsViewDelegate;

@interface MMMsgHeaderTipsView : UIView

@property (nonatomic) BOOL isExpanded;
@property (retain, nonatomic) UIButton *button;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIImageView *arrowImageView;
@property (weak, nonatomic) id<MMMsgHeaderTipsViewDelegate> delegate;
@property (nonatomic) double maxWidth;
@property (nonatomic) struct CGSize { double width; double height; } iconSize;
@property (retain, nonatomic) UIImage *iconImage;
@property (retain, nonatomic) NSArray *iconImages;
@property (nonatomic) double animationDuration;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) UIColor *titleColor;
@property (nonatomic) BOOL showRightArrow;
@property (retain, nonatomic) UIColor *rightArrowColor;
@property (nonatomic) BOOL showBorder;
@property (retain, nonatomic) UIColor *borderColor;
@property (nonatomic) double borderWidth;

+ (double)height;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setExpanded:(BOOL)a0 animate:(BOOL)a1;
- (void)initUI;
- (void)sizeToFit;
- (void)layoutSubviews;
- (void)updateIconSize;
- (void)onButtonClick;
- (void).cxx_destruct;

@end
