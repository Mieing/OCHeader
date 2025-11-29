@class UIButton, UILabel, WXGRoamBackupPackageModel, UIView;
@protocol WXGRoamLitePackageCellDelegate;

@interface WXGRoamLitePackageCell : UITableViewCell {
    WXGRoamBackupPackageModel *_viewModel;
    UIView *_blockView;
    UILabel *_titleView;
    UILabel *_tipsView;
    UIButton *_backupBtn;
    UIButton *_restoreBtn;
    UIButton *_deleteBtn;
}

@property (weak, nonatomic) id<WXGRoamLitePackageCellDelegate> delegate;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)setupView;
- (void)updateLayout;
- (void)updateViewByViewModel:(id)a0;
- (void)setCellWidth:(double)a0;
- (void)onStartBackup;
- (void)onStartRestore;
- (void)onDeletePackage;
- (void).cxx_destruct;

@end
