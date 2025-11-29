@class UIColor, NSMutableArray;
@protocol FavTagEditViewDelegate;

@interface FavTagListView : MMUIView {
    NSMutableArray *m_arrTagButtons;
    UIColor *m_defaultButtonTextColor;
}

@property (nonatomic) BOOL alignCenter;
@property (nonatomic) double buttonCornerRadius;
@property (weak, nonatomic) id<FavTagEditViewDelegate> m_delegate;

- (id)initWithTags:(id)a0;
- (id)initWithTags:(id)a0 alignCenter:(BOOL)a1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)setButtonBackground:(id)a0 chosen:(BOOL)a1 cornerRadius:(double)a2;
- (id)addButton:(id)a0;
- (void)setButtonHighLight:(BOOL)a0 named:(id)a1;
- (void)setHighLightKeyword:(id)a0;
- (void)highLightButtons:(id)a0;
- (void)unHighLightAll;
- (struct CGPoint { double x0; double x1; })getPositionForView:(id)a0 withWidth:(double)a1 behindButton:(id)a2;
- (void)makeButtonCenter;
- (void)buttonClicked:(id)a0;
- (void)longPressBtn:(id)a0;
- (long long)accessibilityElementCount;
- (id)accessibilityElementAtIndex:(long long)a0;
- (long long)indexOfAccessibilityElement:(id)a0;
- (void).cxx_destruct;

@end
