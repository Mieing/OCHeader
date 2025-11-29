@class UIView, NSString, DUXTabBarCustomViewItem;
@protocol DUXTabBarItemViewDelegate;

@interface DUXTabbarCustomViewItemView : UIView <DUXTabBarItemViewProtocol>

@property (retain, nonatomic) DUXTabBarCustomViewItem *item;
@property (nonatomic) BOOL isSelected;
@property (retain, nonatomic) UIView *defaultView;
@property (retain, nonatomic) UIView *selectedView;
@property (nonatomic) double itemWidth;
@property (nonatomic) BOOL autoFitWidth;
@property (nonatomic) double tabBarHeight;
@property (weak, nonatomic) id<DUXTabBarItemViewDelegate> delegate;
@property (nonatomic) long long type;
@property (readonly, nonatomic) double selectedIndicatorWidth;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setupText;
- (void)updateItemWidthWithAutoFitWidth:(BOOL)a0 preferItemWidth:(double)a1 type:(long long)a2;
- (id)initWithItem:(id)a0 autoFitWidth:(BOOL)a1 preferItemWidth:(double)a2 tabBarHeight:(double)a3 type:(long long)a4;
- (void)tapFuction:(id)a0;
- (void).cxx_destruct;

@end
