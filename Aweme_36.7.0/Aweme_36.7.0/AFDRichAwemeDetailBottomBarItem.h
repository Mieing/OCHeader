@class NSString, UIImageView, UIImage, UILabel, UILongPressGestureRecognizer;

@interface AFDRichAwemeDetailBottomBarItem : UIView <UIGestureRecognizerDelegate>

@property (retain, nonatomic) UIImage *icon;
@property (retain, nonatomic) UIImage *highlightedIcon;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) BOOL supportDynamicTheme;
@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (copy, nonatomic) id /* block */ clickedBlock;
@property (retain, nonatomic) UILongPressGestureRecognizer *tapGes;
@property (nonatomic) BOOL highlighed;
@property (nonatomic) BOOL disableImpactFeedback;
@property (nonatomic) unsigned long long itemType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)itemWidth;

- (void)updateIconImage:(id)a0;
- (id)initWithIconImage:(id)a0 highlightedIcon:(id)a1 title:(id)a2 supportDynamicTheme:(BOOL)a3 clickBlock:(id /* block */)a4;
- (id)initWithIconImage:(id)a0 title:(id)a1 supportDynamicTheme:(BOOL)a2 clickBlock:(id /* block */)a3;
- (void)setHighlighed:(BOOL)a0 animated:(BOOL)a1;
- (id)initWithIconImage:(id)a0 highlightedIcon:(id)a1 title:(id)a2 clickBlock:(id /* block */)a3;
- (id)initWithIconImage:(id)a0 title:(id)a1 clickBlock:(id /* block */)a2;
- (id)accessibilityLabel;
- (BOOL)isAccessibilityElement;
- (void).cxx_destruct;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityHint;
- (void)handleGesture:(id)a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (id)accessibilityValue;
- (void)setupUI;
- (void)updateTitle:(id)a0;

@end
