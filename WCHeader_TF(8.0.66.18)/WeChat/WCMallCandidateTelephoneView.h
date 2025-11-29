@class NSString, UIImageView, UITableView;
@protocol WCMallCandidateTelephoneViewDelegate;

@interface WCMallCandidateTelephoneView : MMUIView <UITableViewDataSource, UITableViewDelegate> {
    UITableView *m_oTelFilterTableView;
    UIImageView *bgImageView;
}

@property (weak, nonatomic) id<WCMallCandidateTelephoneViewDelegate> m_delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)initTableView;
- (void)initView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)resetWCMallTelListTableViewHeight:(double)a0;
- (void)dealloc;
- (void)reloadCandidateTelephoneView;
- (void)reloadTelFilterTableView;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void).cxx_destruct;

@end
