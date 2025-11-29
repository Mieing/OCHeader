@class UIFont, NSArray, UIColor, UILabel;

@interface AWEPOIUGCRateFiveStarView : UIView

@property (copy, nonatomic) NSArray *grades;
@property (copy, nonatomic) NSArray *expGroups;
@property (nonatomic) struct CGSize { double width; double height; } iconSize;
@property (nonatomic) double spacing;
@property (nonatomic) double textMarign;
@property (retain, nonatomic) UIFont *font;
@property (retain, nonatomic) UIColor *color;
@property (retain, nonatomic) UILabel *textLabel;
@property (nonatomic) struct CGSize { double width; double height; } contentSize;
@property (nonatomic) BOOL isAnimating;
@property (nonatomic) long long currentIndex;
@property (copy, nonatomic) id /* block */ didCompleteTap;

- (BOOL)needAnimation;
- (id)initWithGrades:(id)a0 expGroups:(id)a1 attributes:(id)a2;
- (long long)tapIndexAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)selectWithAnimationAtIndex:(long long)a0;
- (void)dispatchCompleteTap:(id)a0;
- (void)resetToUnselectedStatus;
- (id)scaleAnimation;
- (void)selectAtIndex:(long long)a0;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)tapAction:(id)a0;
- (void)createUI;
- (void)updateWithText:(id)a0;

@end
