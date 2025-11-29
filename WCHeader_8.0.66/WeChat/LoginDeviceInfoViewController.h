@class MMTableViewInfo, WCTableViewNormalCellManager, SafeDeviceData;

@interface LoginDeviceInfoViewController : MMUIViewController <PBMessageObserverDelegate> {
    SafeDeviceData *m_info;
    MMTableViewInfo *m_tableViewInfo;
}

@property (retain, nonatomic) WCTableViewNormalCellManager *editNameCellInfo;
@property (retain, nonatomic) WCTableViewNormalCellManager *delCellInfo;

- (id)initWithDeviceIno:(id)a0;
- (void)viewDidLoad;
- (void)reloadTableData;
- (void)showQuitTip;
- (void)delCurrentDevice;
- (void)editName;
- (void)setDeviceName:(id)a0;
- (void)MessageReturnUpdateDevice:(id)a0 Event:(unsigned int)a1;
- (void)MessageReturnDelDevice:(id)a0 Event:(unsigned int)a1;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (id)reportInfoDict;
- (void)registerYReportSdk;
- (unsigned long long)logid;
- (void).cxx_destruct;

@end
