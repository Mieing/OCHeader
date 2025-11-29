@class UIColor, NSMutableArray, MMUIButton;
@protocol WCFinderTagHeaderCollectionReusableViewDelegate;

@interface WCFinderTagHeaderCollectionReusableView : UICollectionReusableView

@property (retain, nonatomic) NSMutableArray *buttonArray;
@property (retain, nonatomic) NSMutableArray *categoryArray;
@property (retain, nonatomic) MMUIButton *arrowButton;
@property (weak, nonatomic) id<WCFinderTagHeaderCollectionReusableViewDelegate> delegate;
@property (retain, nonatomic) UIColor *buttonNormalBackgroundColor;
@property (retain, nonatomic) UIColor *buttonSelectedBackgroundColor;

+ (double)getTagHeaderViewHeight:(id)a0 screenSize:(struct CGSize { double x0; double x1; })a1 showTotalTag:(BOOL)a2;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (double)getTagButtonWidthTarget:(double)a0 limitWidth:(double)a1;
- (id)getNewCategoryButton;
- (void)updateTagHeaderButtonsSigleStyleWith:(id)a0 selectedIndex:(long long)a1;
- (void)updateTagHeaderButtonsMultiStyleWith:(id)a0 selectedIndex:(long long)a1;
- (void)onClickTagButtonAction:(id)a0;
- (void)onClickArrowButtonAction:(id)a0;
- (BOOL)hasFoldButton;
- (id)getFirstLineCategoryString;
- (void)setFoldButtonHidden:(BOOL)a0;
- (void).cxx_destruct;

@end
