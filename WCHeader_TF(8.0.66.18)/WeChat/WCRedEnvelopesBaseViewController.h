@class NSString, WCRedEnvelopesControlData;

@interface WCRedEnvelopesBaseViewController : WCBizBaseViewController <MMTableViewInfoDelegate, WCBaseInfoItemDelegate> {
    WCRedEnvelopesControlData *m_data;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)viewDidLayoutSubviews;
- (void)setupWithData:(id)a0;
- (void)refreshViewWithData:(id)a0;
- (void).cxx_destruct;

@end
