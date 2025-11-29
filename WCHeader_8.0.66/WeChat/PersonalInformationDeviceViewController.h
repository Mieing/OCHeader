@class MMTableViewInfo, UIView;

@interface PersonalInformationDeviceViewController : MMPageSheetBaseViewController

@property (retain, nonatomic) UIView *contentHeaderView;
@property (retain, nonatomic) MMTableViewInfo *tableViewInfo;

- (id)init;
- (void)viewDidLoad;
- (void)initView;
- (void)initTableView;
- (void)initHeaderView;
- (void)reloadData;
- (void)viewDidLayoutSubviews;
- (void)makeCell:(id)a0 cellInfo:(id)a1;
- (double)getCellHeightForDevice:(id)a0;
- (void)makeNoContentCell:(id)a0;
- (id)genDeviceInfoDateTimeStringByUInt:(unsigned int)a0 retDayLength:(unsigned long long *)a1;
- (void).cxx_destruct;

@end
