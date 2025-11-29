@class UIColor, NSString, UIView, IESECSlidingTabbarView, IESECWinTabObject;

@interface IESECWinTabCell : UICollectionViewCell <IESECSlidingTabbarDelegate, IESECWinTabCellProtocol> {
    IESECWinTabObject *_object;
    UIColor *_defaultIndicatorColor;
}

@property (retain, nonatomic) UIView *bottomSplitLine;
@property (copy, nonatomic) id /* block */ indexChanged;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) IESECSlidingTabbarView *tabBarView;
@property (retain, nonatomic) UIView *backView;
@property (copy, nonatomic) id /* block */ selectTabBlock;

- (void)bindObject:(id)a0;
- (void)p_addObserver;
- (void)tabbarTappedAtIndex:(unsigned long long)a0;
- (void)setupTabBarContent;
- (void)updateTabbarWithTabs:(id)a0;
- (long long)indexOfSelectTab:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupViews;
- (void)setSelectedIndex:(unsigned long long)a0 animated:(BOOL)a1;

@end
