@class UILabel, DUXTabBarTextItem, NSString;
@protocol DUXTabBarItemViewDelegate;

@interface DUXTabbarTextItemView : UIView <DUXTabBarItemViewProtocol>

@property (retain, nonatomic) DUXTabBarTextItem *item;
@property (nonatomic) BOOL isSelected;
@property (retain, nonatomic) UILabel *tabLabel;
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
