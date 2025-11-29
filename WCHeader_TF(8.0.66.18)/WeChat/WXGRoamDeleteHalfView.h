@class NSString;

@interface WXGRoamDeleteHalfView : MMPageSheetBaseView <IRoamBackupPackageServiceExt, MMPageSheetBottomViewDelegate>

@property (copy, nonatomic) id /* block */ actionBlock;
@property (nonatomic) BOOL isCanceled;
@property (nonatomic) unsigned long long enterScene;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithEnterScene:(unsigned long long)a0;
- (void)setupDetailView:(unsigned long long)a0;
- (void)onTapCancel;
- (id)colorForPageSheetConfirmButton;
- (id)titleForPageSheetConfirmButton;
- (void)onClickPageSheetConfirmButton;
- (void)onClickPageSheetCancelButton;
- (void)onRoamBackupPackageServiceDeviceConnectRes:(BOOL)a0 packageID:(unsigned long long)a1;
- (void).cxx_destruct;

@end
