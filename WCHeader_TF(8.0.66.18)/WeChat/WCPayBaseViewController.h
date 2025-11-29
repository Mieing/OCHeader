@class NSString, WCPayControlData;
@protocol WCPayBaseViewControllerRemoveDelegate, WCPayBaseViewControllerDelegate;

@interface WCPayBaseViewController : WCBizBaseViewController <MMTableViewInfoDelegate, WCBaseInfoItemDelegate> {
    WCPayControlData *m_data;
    id<WCPayBaseViewControllerDelegate> _payBaseDelegate;
}

@property (weak, nonatomic) id<WCPayBaseViewControllerRemoveDelegate> removeDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)data;
- (id)init;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)viewDidLayoutSubviews;
- (void)viewDidBePoped:(BOOL)a0;
- (void)viewDidBeDismissed:(BOOL)a0;
- (void)OnBack;
- (void)setPayBaseDelegate:(id)a0;
- (void)setupWithData:(id)a0;
- (void)refreshViewWithData:(id)a0;
- (void).cxx_destruct;

@end
