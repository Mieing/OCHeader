@class NSString, MMUIView, UITableView;
@protocol WCMallOldTelephoneViewDelegate;

@interface WCMallOldTelephoneView : MMUIView <UITableViewDataSource, UITableViewDelegate> {
    UITableView *m_oTelFilterTableView;
}

@property (retain, nonatomic) MMUIView *backgroundView;
@property (nonatomic) unsigned int historyCount;
@property (weak, nonatomic) id<WCMallOldTelephoneViewDelegate> m_delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)initOldTelphoneViewWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 delegate:(id)a1;
- (void)initView;
- (void)initTableView;
- (void)resetWCMallTelListTableViewHeight;
- (void)reloadTelFilterTableView;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)tapGesture;
- (void).cxx_destruct;

@end
