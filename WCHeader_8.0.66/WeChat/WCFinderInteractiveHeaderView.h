@class UIButton, NSArray, WCFinderInteractiveTabItem, NSString, UILabel, WCFinderTabSwitchView;
@protocol WCFinderInteractiveHeaderViewDelegate;

@interface WCFinderInteractiveHeaderView : UIView <WCFinderTabSwitchViewDataSource, WCFinderTabSwitchViewDelegate>

@property (nonatomic) BOOL compactnessMode;
@property (retain, nonatomic) WCFinderTabSwitchView *tabSwitchView;
@property (retain, nonatomic) UILabel *favoritesFeedLabel;
@property (retain, nonatomic) UILabel *favoritesCollectionLabel;
@property (nonatomic) long long selectedDataType;
@property (retain, nonatomic) NSArray *btnItems;
@property (retain, nonatomic) NSArray *subTabs;
@property (retain, nonatomic) UIButton *subTabButton;
@property (retain, nonatomic) WCFinderInteractiveTabItem *selectedTab;
@property (weak, nonatomic) id<WCFinderInteractiveHeaderViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 compactnessMode:(BOOL)a1;
- (void)_setup;
- (void)doLayout;
- (void)updateSubTabList:(id)a0;
- (id)findSubTabSelectedTitle;
- (void)_setupFavoritesLabel;
- (void)_didTapFavoritesLabel:(id)a0;
- (void)_selectedTypeDidChangedWithTabTypeV2:(id)a0;
- (void)_selectedTypeDidChangedWithTabType:(id)a0;
- (void)_selectedDataTypeDidChangedWithDataType:(long long)a0;
- (long long)_interactiveTabTypeForIndex:(long long)a0;
- (id)_favoritesDataTypeLabelWithText:(id)a0;
- (void)_updateFavoritesLabelSelectedState;
- (void)_updateFavoritesLabel:(id)a0 isSelected:(BOOL)a1;
- (long long)numberOfTabSwitchView:(id)a0;
- (id)tabSwitchView:(id)a0 customTabViewAtIndex:(long long)a1;
- (BOOL)onTabSwitchViewUserSelectIdx:(long long)a0 oldIdx:(long long)a1 animated:(BOOL)a2 context:(void *)a3 completion:(id /* block */)a4;
- (void)onClickSubTabButton;
- (void)_updateSubTabBtnStyle:(BOOL)a0;
- (void).cxx_destruct;

@end
