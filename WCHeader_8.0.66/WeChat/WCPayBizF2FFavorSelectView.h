@class MMTableView, BusiF2FFavorCommResp, NSString, UIView, NSMutableArray, UIButton;
@protocol WCPayBizF2FFavorSelectViewDelegate;

@interface WCPayBizF2FFavorSelectView : WCPayNavigationView <WCPayFavorSelectCellDelegate, UITableViewDelegate, UITableViewDataSource>

@property (retain, nonatomic) UIButton *m_rightButton;
@property (retain, nonatomic) UIView *m_lineView;
@property (retain, nonatomic) MMTableView *m_tableView;
@property (retain, nonatomic) BusiF2FFavorCommResp *m_favorResp;
@property (weak, nonatomic) id<WCPayBizF2FFavorSelectViewDelegate> m_delegate;
@property (retain, nonatomic) NSMutableArray *m_selectedArray;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)layoutSubviews;
- (void)updateView;
- (void)updateTableView;
- (void)updateRightButton;
- (void)updateLineView;
- (void)onClickRightButton;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)onWCPayFavorSelectCellSelectIndex:(long long)a0;
- (void)reportWithScene:(unsigned long long)a0;
- (void).cxx_destruct;

@end
