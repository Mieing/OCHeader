@class UITapGestureRecognizer, NSArray, UIImageView, MMUILabel;
@protocol WCFinderTabFilterViewDelegate;

@interface WCFinderTabFilterView : UIView

@property (retain, nonatomic) MMUILabel *titleLabel;
@property (retain, nonatomic) UIImageView *arrowImageView;
@property (nonatomic, getter=isExpanded) BOOL expand;
@property (retain, nonatomic) UITapGestureRecognizer *tapGesture;
@property (weak, nonatomic) id<WCFinderTabFilterViewDelegate> delegate;
@property (retain, nonatomic) NSArray *nameList;
@property (nonatomic) unsigned long long selectedIndex;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)initSubviews;
- (void)initLayout;
- (void)initGestures;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)layoutSubviews;
- (void)switchExpand:(BOOL)a0;
- (void)onTap:(id)a0;
- (id)generateMenuItems;
- (void)showMenu;
- (void).cxx_destruct;

@end
