@class NSString, UIImageView, UILabel, DUXTabBarTextIconItem, UIView;
@protocol DUXTabBarItemViewDelegate;

@interface DUXTabbarTextIconItemView : UIView <DUXTabBarItemViewProtocol>

@property (retain, nonatomic) DUXTabBarTextIconItem *item;
@property (nonatomic) BOOL isSelected;
@property (nonatomic) double itemWidth;
@property (nonatomic) BOOL autoFitWidth;
@property (nonatomic) double tabBarHeight;
@property (weak, nonatomic) id<DUXTabBarItemViewDelegate> delegate;
@property (nonatomic) long long type;
@property (retain, nonatomic) UILabel *tabLabel;
@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) UIView *customView;
@property (readonly, nonatomic) double selectedIndicatorWidth;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateItemWidthWithAutoFitWidth:(BOOL)a0 preferItemWidth:(double)a1 type:(long long)a2;
- (id)initWithItem:(id)a0 autoFitWidth:(BOOL)a1 preferItemWidth:(double)a2 tabBarHeight:(double)a3 type:(long long)a4;
- (void)tapFuction:(id)a0;
- (void)setupCustom;
- (void).cxx_destruct;
- (void)setup;

@end
