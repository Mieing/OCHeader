@class NSString, UIImageView, UILabel, UIView, WXGRoamBannerView;

@interface RoamSimpleBackupPackageListCell : UITableViewCell <IRoamBackupPackageServiceExt>

@property (retain, nonatomic) UIView *uiContainerView;
@property (retain, nonatomic) UIImageView *uiIconView;
@property (retain, nonatomic) UILabel *uiTitleLabel;
@property (retain, nonatomic) UIView *labelIconView;
@property (retain, nonatomic) UILabel *uiSubTitleLabel;
@property (retain, nonatomic) WXGRoamBannerView *uiBannerView;
@property (retain, nonatomic) UIImageView *uiRightArrowImg;
@property (nonatomic) double cellWidth;
@property (nonatomic) BOOL isShowDetail;
@property (nonatomic) BOOL isDeleted;
@property (nonatomic) unsigned long long cellIndex;
@property (nonatomic) unsigned long long totalCellCount;
@property (nonatomic) BOOL bTopLastActivity;
@property (nonatomic) double cellHeight;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)prepareForReuse;
- (void)viewDidPop;
- (void)didEndDisplayingCell;
- (void)setupWithWidth:(double)a0 index:(long long)a1 totalCount:(long long)a2 isShowDetail:(BOOL)a3;
- (void)setupViews;
- (void)updateSubTitleView;
- (void)onRoamBackupPackageServiceBackupRestoreConflict:(BOOL)a0;
- (void)onRoamBackupPackageServiceTaskProgressEvent:(unsigned long long)a0 current:(unsigned long long)a1 total:(unsigned long long)a2;
- (void)onRoamBackupPackageServiceDeleteProgress:(unsigned long long)a0 progress:(float)a1;
- (void)onRoamBackupPackageServiceNotifyCode:(unsigned long long)a0 notifyCode:(unsigned long long)a1;
- (void)setUiLabelAutoNewLine:(id)a0;
- (void).cxx_destruct;

@end
