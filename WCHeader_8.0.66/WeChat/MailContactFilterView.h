@class NSString, NSMutableArray, MMTableView;
@protocol MailContactFilterViewDelegate;

@interface MailContactFilterView : MMUIView <UITableViewDelegate, UITableViewDataSource> {
    MMTableView *m_tableView;
}

@property (retain, nonatomic) NSMutableArray *m_filterArray;
@property (weak, nonatomic) id<MailContactFilterViewDelegate> m_delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)reloadTableView;
- (void)resetOffset;
- (void)initData;
- (void)initView;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void).cxx_destruct;

@end
