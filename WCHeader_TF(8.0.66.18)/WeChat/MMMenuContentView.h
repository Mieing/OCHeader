@class UIColor, MMMenuItemData, UIImageView, NSString, UIView, NSMutableArray;
@protocol MMMenuContentViewDelegate;

@interface MMMenuContentView : UIView <MMMenuItemViewDelegate>

@property (retain, nonatomic) MMMenuItemData *menuData;
@property (retain, nonatomic) UIView *menuItemContainerView;
@property (retain, nonatomic) UIImageView *arrowImageView;
@property (retain, nonatomic) NSMutableArray *menuItemViews;
@property (retain, nonatomic) NSMutableArray *separatorViews;
@property (weak, nonatomic) id<MMMenuContentViewDelegate> delegate;
@property (retain, nonatomic) UIColor *customBackgroundColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateWithData:(id)a0 animated:(BOOL)a1;
- (void)makeItemsView:(id)a0;
- (void)addSeparatorLineInY:(double)a0;
- (void)addSeparatorLineInY:(double)a0 left:(double)a1 right:(double)a2;
- (void)layoutSubviews;
- (void)updateSubviewsFrame;
- (void)onMenuViewDidShow;
- (void)onMenuItemSelected:(id)a0 itemView:(id)a1;
- (void).cxx_destruct;

@end
