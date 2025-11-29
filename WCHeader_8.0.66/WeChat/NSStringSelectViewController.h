@class NSString, NSArray, MMTableViewInfo, WCTableViewNormalCellManager;

@interface NSStringSelectViewController : MMUIViewController {
    MMTableViewInfo *m_tableViewInfo;
    id m_targetOnSelect;
    SEL m_selOnSelect;
    WCTableViewNormalCellManager *m_oTableViewCellInfo;
    NSArray *m_arrString;
}

@property (copy, nonatomic) NSString *selected;
@property (nonatomic) BOOL bPresentModel;

- (void)initView;
- (void)viewWillLayoutSubviews;
- (void)OnCancel;
- (void)OnDone;
- (void)updateTableViewWithArray:(id)a0 selected:(id)a1;
- (id)initWithArray:(id)a0 selected:(id)a1;
- (void)setOnSelectTarget:(id)a0 sel:(SEL)a1;
- (void)setFooterTip:(id)a0 section:(unsigned int)a1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)OnSelectCell:(id)a0;
- (void).cxx_destruct;

@end
