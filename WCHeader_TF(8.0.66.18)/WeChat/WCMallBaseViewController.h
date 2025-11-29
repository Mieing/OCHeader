@class NSString, WCMallControlData;

@interface WCMallBaseViewController : WCBizBaseViewController <MMTableViewInfoDelegate, WCBaseInfoItemDelegate> {
    WCMallControlData *m_data;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setupWithData:(id)a0;
- (void)refreshViewWithData:(id)a0;
- (void).cxx_destruct;

@end
