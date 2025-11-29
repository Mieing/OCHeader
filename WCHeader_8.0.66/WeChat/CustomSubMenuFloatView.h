@class NSString, UIView, NSMutableArray, MMTableView;
@protocol CustomSubMenuFloatViewDelegate;

@interface CustomSubMenuFloatView : MMUIButton <UITableViewDelegate, UITableViewDataSource> {
    MMTableView *m_tableView;
    double m_tableCellWidth;
}

@property (retain, nonatomic) NSMutableArray *m_btnList;
@property (weak, nonatomic) id<CustomSubMenuFloatViewDelegate> m_delegate;
@property (retain, nonatomic) UIView *m_contentView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)initWithList:(id)a0 ArrowX:(double)a1 delegate:(id)a2;
- (void)loadContentViewWithArrowX:(double)a0;
- (void)onTapScreenBtn;
- (void)onTableViewButtonDown:(id)a0;
- (void)animatePresentContentView;
- (void)animateDismissContentView;
- (void)onRemoveFloatView;
- (double)getFontSize;
- (double)getTableCellWidth;
- (long long)numberOfSectionsInTableView:(id)a0;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (BOOL)isSubMenuListHasIcon;
- (long long)storage2ShowIndex:(long long)a0;
- (long long)show2StorageIndex:(long long)a0;
- (void)dumpView:(id)a0 atIndent:(int)a1 into:(id)a2;
- (id)displayViews:(id)a0;
- (void)preloadWeAppTaskIfNeeded;
- (BOOL)isPayRelatedSession;
- (BOOL)isInCollAssistSession;
- (BOOL)isInWeChatPaySession;
- (BOOL)shouldShowRedDotWithMenuKey:(id)a0;
- (void)tryReportChatBotClickEvent:(id)a0;
- (void)reportMenuClickWithName:(id)a0;
- (void).cxx_destruct;

@end
