@class NSArray, WCFinderTabSwitchView, NSString;
@protocol WCFinderSearchTabCellHeaderDelegate;

@interface WCFinderSearchTabCellHeader : UICollectionReusableView <WCFinderTabSwitchViewDelegate, WCFinderTabSwitchViewDataSource>

@property (retain, nonatomic) WCFinderTabSwitchView *switchView;
@property (weak, nonatomic) id<WCFinderSearchTabCellHeaderDelegate> delegate;
@property (retain, nonatomic) NSArray *tabs;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)displayHeightForTab;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (long long)numberOfTabSwitchView:(id)a0;
- (id)tabSwitchView:(id)a0 titleForTabAtIndex:(long long)a1;
- (id)tabSwitchView:(id)a0 uniqueObjectForIndex:(unsigned long long)a1;
- (BOOL)onTabSwitchViewUserSelectIdx:(long long)a0 oldIdx:(long long)a1 animated:(BOOL)a2 context:(void *)a3 completion:(id /* block */)a4;
- (void).cxx_destruct;

@end
