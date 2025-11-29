@class UISwitch, UILabel, UIView, MMUILabel;

@interface WXGRoamHalfScreenView : MMPageSheetBaseView {
    MMUILabel *m_titleLabel;
    MMUILabel *m_subTitleLabel;
}

@property (retain, nonatomic) UIView *autoBackupView;
@property (retain, nonatomic) UIView *autoBackupExtraView;
@property (retain, nonatomic) UILabel *autoTitle;
@property (retain, nonatomic) UILabel *autoPauseTips;
@property (retain, nonatomic) UISwitch *lowPowerBtn;
@property (retain, nonatomic) UISwitch *autoBackupBtn;
@property (retain, nonatomic) UISwitch *mobileNetBtn;
@property (nonatomic) BOOL enterIsAutoBackup;
@property (nonatomic) BOOL enterIsLowPowerBackup;
@property (nonatomic) double cellHeight;
@property (nonatomic) BOOL isCloseDetail;
@property (nonatomic) BOOL isEnterFromList;

- (id)init;
- (void)pageSheetWillClose:(BOOL)a0;
- (void)setupAutoBackupView;
- (id)getDeviceName;
- (void)setupAutoView;
- (void)updateAutoView;
- (void)switchAutoBackup;
- (void)switchMobileNet;
- (void)switchLowPower;
- (void).cxx_destruct;

@end
