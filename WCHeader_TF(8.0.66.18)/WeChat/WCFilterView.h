@class UIColor, NSString, NSMutableDictionary, MMUIView, WCFilterBasePanel, NSMutableArray, UIView;
@protocol WCFilterViewDelegate;

@interface WCFilterView : MMUIView <WCFilterBasePanelDelegate> {
    NSMutableArray *m_sections;
    MMUIView *m_titlePanel;
    NSMutableDictionary *m_selectedIndexes;
    int m_extendedIndex;
    BOOL m_duringAnimation;
    WCFilterBasePanel *m_extendedPanel;
    MMUIView *m_containView;
    MMUIView *m_animateView;
    MMUIView *m_maskView;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } m_preFrame;
    UIView *m_preSuperView;
    unsigned long long m_sectionMode;
}

@property (weak, nonatomic) id<WCFilterViewDelegate> delegate;
@property (nonatomic) unsigned long long popType;
@property (nonatomic) BOOL autoDismissAfterSelect;
@property (nonatomic) BOOL useEmphasizeColor;
@property (nonatomic) BOOL useBoldFont;
@property (nonatomic) UIColor *curTintColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 andFilterSections:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 andFilterSections:(id)a1 sectionMode:(unsigned long long)a2;
- (void)initView;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dismissSelectionPanel;
- (void)dismissSelectionPanelAnimation:(BOOL)a0;
- (id)getSelectedIndexes;
- (id)getSelectedItems;
- (void)updateTitleInButton:(id)a0;
- (void)updateFilterSection:(id)a0 atIndex:(unsigned int)a1;
- (void)clearAllSelection;
- (void)onClickBtn:(id)a0;
- (void)dismissCurrentPanel:(BOOL)a0 updateTitle:(BOOL)a1 withCompletion:(id /* block */)a2;
- (void)dismissCurrentPanelComplete:(BOOL)a0;
- (void)onDismissSelectionPanelUpdateTitle;
- (void)onDismissSelectionPanel;
- (void)syncSelection;
- (void)onItemClick:(unsigned int)a0;
- (void)onCleanBtnClick;
- (void).cxx_destruct;

@end
