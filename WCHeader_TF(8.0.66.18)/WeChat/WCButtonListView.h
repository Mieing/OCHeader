@class UIColor, NSMutableDictionary, NSMutableArray;

@interface WCButtonListView : UIView

@property (copy, nonatomic) id /* block */ generateButtonHandler;
@property (retain, nonatomic) NSMutableDictionary *keyToButtonItemDict;
@property (retain, nonatomic) NSMutableArray *itemList;
@property (nonatomic) BOOL needsLayoutButtons;
@property (nonatomic) BOOL autoExpandHitArea;
@property (nonatomic) double buttonPadding;
@property (nonatomic) double separatorLineHeight;
@property (retain, nonatomic) UIColor *separatorColor;

+ (id)keyForButton:(id)a0;
+ (id)generateBottomButton;
+ (id)generateSeparatorLine;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })layoutButtonsAndSeparatorsWithWidth:(double)a0;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (id)addButtonWithTitle:(id)a0 handler:(id /* block */)a1;
- (void)addLineBreak;
- (void)onTapButton:(id)a0;
- (void).cxx_destruct;

@end
