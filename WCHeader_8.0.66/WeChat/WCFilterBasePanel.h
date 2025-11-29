@class NSString, NSArray, NSMutableSet, UIView, MMUIView;
@protocol WCFilterBasePanelDelegate;

@interface WCFilterBasePanel : MMUIView {
    NSString *m_cleanBtnTitle;
    BOOL m_isLoading;
    NSString *m_loadingTitle;
    NSString *m_emptyTitle;
    NSArray *m_filterItems;
    BOOL m_canMultiSelect;
    NSMutableSet *m_selectedIndexes;
    unsigned int m_itemCount;
    UIView *m_emptyView;
    MMUIView *m_loadingView;
}

@property (weak, nonatomic) id<WCFilterBasePanelDelegate> delegate;
@property (readonly, nonatomic) BOOL hasCleanBtn;
@property (nonatomic) BOOL useEmphasizeColor;
@property (nonatomic) BOOL useBoldFont;

- (id)initWithWidth:(double)a0 andSection:(id)a1;
- (void)updateFilterSection:(id)a0;
- (void)clearSelection;
- (void)configWithSection:(id)a0;
- (id)getSelectedIndexes;
- (void)updateHeightWithRowNum:(unsigned int)a0 andRowHeight:(double)a1;
- (void)configSelectedIndex:(id)a0;
- (void)clearLoadingAndEmptyView;
- (void)showLoadingOrEmptyView;
- (void)showLoadingView;
- (void)showEmptyView;
- (void).cxx_destruct;

@end
