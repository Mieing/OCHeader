@class NSString, MMHorizontalTableView, UIView, NSMutableArray, UIButton;
@protocol CustomMenuToolViewDelegate;

@interface CustomMenuToolView : MMUIView <MMHorizontalTableViewDelegate, MMHorizontalTableViewDataSource, UIScrollViewDelegate> {
    UIButton *_changeBtn;
    long long lastClickMenuIndex;
}

@property (retain, nonatomic) UIView *bgView;
@property (retain, nonatomic) NSMutableArray *m_menuList;
@property (retain, nonatomic) MMHorizontalTableView *m_tableView;
@property (retain, nonatomic) UIButton *m_pageBtn;
@property (weak, nonatomic) id<CustomMenuToolViewDelegate> m_delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)title;
- (id)initWithMenuList:(id)a0;
- (void)layoutSubviews;
- (void)loadSubView;
- (void)preloadWeAppTaskIfNeeded;
- (unsigned long long)numberOfColumnsInHorizontalTableView:(id)a0;
- (double)horizontalTableView:(id)a0 widthForColumnAtIndex:(unsigned long long)a1;
- (id)horizontalTableView:(id)a0 viewForColumnAtIndex:(unsigned long long)a1;
- (void)horizontalTableView:(id)a0 didSelectColumnAtIndex:(unsigned long long)a1;
- (void)onMenuButtonClick:(id)a0;
- (void)onPageBtnClick:(id)a0;
- (void)onChangeBtnClick:(id)a0;
- (void)scrollViewDidScroll:(id)a0;
- (BOOL)isMenusNumerous;
- (void)resetLastClickMenuIndex;
- (BOOL)isInCollAssistSession;
- (BOOL)isInWeChatPaySession;
- (BOOL)isPayRelatedSession;
- (BOOL)shouldShowRedDotWithMenuKey:(id)a0;
- (void)reportMenuClickWithName:(id)a0;
- (void)reportWCPayMenuClickWithScene:(int)a0 name:(id)a1 reddot:(int)a2 expose:(int)a3;
- (void).cxx_destruct;

@end
