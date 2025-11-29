@class NSString, UIImageView, WXGRoamBackupPackageDetailCell, UIView;

@interface WXGRoamChooseRangeHalfView : MMPageSheetBaseView <IRoamBackupPackageServiceExt>

@property (retain, nonatomic) WXGRoamBackupPackageDetailCell *selectAllView;
@property (retain, nonatomic) UIView *selectTypeView;
@property (retain, nonatomic) WXGRoamBackupPackageDetailCell *selectUsersView;
@property (nonatomic) unsigned long long curSelectedType;
@property (retain, nonatomic) UIImageView *selectImg;
@property (nonatomic) BOOL isUpdate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithIsUpdate:(BOOL)a0;
- (void)setupSelectedData;
- (void)setupView;
- (void)addAllAction;
- (void)showSelected;
- (void)onRoamBackupPackageServiceChooseRangeDetailComplete;
- (void).cxx_destruct;

@end
