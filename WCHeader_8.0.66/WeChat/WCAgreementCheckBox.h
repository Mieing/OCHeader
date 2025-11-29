@class UIColor, NSMutableArray, UIImageView, NSString, UIFont, RichTextView, UITapGestureRecognizer;

@interface WCAgreementCheckBox : UIView <ILinkEventExt>

@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) RichTextView *richTextView;
@property (retain, nonatomic) UITapGestureRecognizer *tapGesture;
@property (retain, nonatomic) UIColor *selectedIconColor;
@property (retain, nonatomic) UIColor *unselectedIconColor;
@property (nonatomic) BOOL isEnable;
@property (nonatomic) unsigned long long sizeType;
@property (nonatomic) BOOL isOverlay;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } expandHitAreaInsets;
@property (retain, nonatomic) NSMutableArray *accessibilityElements;
@property (nonatomic) BOOL needsUpdateAccessibility;
@property (nonatomic, getter=isSelected) BOOL selected;
@property (copy, nonatomic) id /* block */ selectBlock;
@property (copy, nonatomic) id /* block */ tapLinkBlock;
@property (retain, nonatomic) NSString *agreement;
@property (retain, nonatomic) UIColor *textColor;
@property (retain, nonatomic) UIFont *font;
@property (nonatomic) double iconLength;
@property (nonatomic) BOOL autoExpandHitArea;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithSizeType:(unsigned long long)a0 isEnable:(BOOL)a1 isOverlay:(BOOL)a2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)initSubviews;
- (void)initGestures;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)layoutSubviews;
- (double)richTextViewMaxWidthFromWidth:(double)a0;
- (void)callSelectBlockIfNeeded;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)doSelect;
- (void)shake;
- (void)adjustExpandHitAreaInsetsIfNeeded;
- (void)updateAccessibilityIfNeeded;
- (long long)accessibilityElementCount;
- (id)accessibilityElementAtIndex:(long long)a0;
- (long long)indexOfAccessibilityElement:(id)a0;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)onTapCheckBox:(id)a0;
- (void)onTextClicked:(id)a0 withRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)onLinkClicked:(id)a0 withRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void).cxx_destruct;

@end
