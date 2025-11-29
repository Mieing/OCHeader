@class NSString, StorageFilterPanel, MMUIView, NSArray, MMUIButton, NSMutableArray;
@protocol StorageFilterViewDelegate;

@interface StorageFilterView : MMUIView <StorageFilterPanelDelegate> {
    MMUIView *m_titlePanel;
    MMUIButton *m_sortBtn;
    MMUIButton *m_filterBtn;
    MMUIView *m_backgroundMask;
    MMUIView *m_containView;
    StorageFilterPanel *m_popupPanel;
    NSArray *m_sortGroups;
    NSArray *m_filterGroups;
    NSMutableArray *m_selected;
    BOOL m_selectedChanged;
    BOOL m_sortPopup;
    BOOL m_filterPopup;
    int m_animationStage;
}

@property (weak, nonatomic) id<StorageFilterViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 sortOptions:(id)a1 filterGroups:(id)a2 filters:(id)a3;
- (void)initView;
- (void)updatePanelTextAndSize;
- (void)selectItem:(long long)a0 inGroup:(long long)a1 forceChanged:(BOOL)a2;
- (void)updateItemTitle:(id)a0 inItem:(long long)a1 andGroup:(long long)a2;
- (void)onSortClick:(id)a0;
- (void)onFilterClick:(id)a0;
- (void)onFilterItemClicked:(long long)a0 group:(long long)a1;
- (void)onFilterShouldClosed:(int)a0;
- (void)onFilterClearButtonClicked;
- (void)onBackgroundTapped;
- (void)showPanelWithFilters:(id)a0 bottomBar:(BOOL)a1;
- (void)dismissPanel;
- (void)dismissPanelWithAnimation:(BOOL)a0 changeFocus:(id)a1 event:(int)a2;
- (void).cxx_destruct;

@end
