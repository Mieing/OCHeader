@class UIView, NSString, NSArray, AWECodeGenDouyinContentPayChargePermissionResponse, AWEVideoPublishViewModel, UICollectionView, DUXButton, UILabel;

@interface AWEPublishPermissionDenyViewController : UIViewController <UICollectionViewDelegate, UICollectionViewDataSource, AWEPublishPermissionDenyDelegate, DUXSheetDelegate>

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (retain, nonatomic) UICollectionView *listCollectionView;
@property (retain, nonatomic) DUXButton *getButton;
@property (copy, nonatomic) NSArray *arrayCondition;
@property (weak, nonatomic) AWEVideoPublishViewModel *publishViewModel;
@property (copy, nonatomic) id /* block */ dismissActionBlock;
@property (copy, nonatomic) id /* block */ updateSheetHeight;
@property (retain, nonatomic) AWECodeGenDouyinContentPayChargePermissionResponse *permissionModel;
@property (nonatomic) BOOL hasVIPVideoPrivilege;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)dux_sheetShouldRecognizeAsynchronousWithGestures;
- (void)sheetDidClickMaskArea:(id)a0;
- (id)trackPublishCommonParams;
- (void)dismiss:(BOOL)a0 schemaName:(id)a1 schema:(id)a2;
- (double)getTextHeight:(id)a0;
- (id)getFailedItem;
- (void)trackPaidVideoUnavailablePageShowWithFailedItem:(id)a0;
- (void)trackPaidVideoUnavailablePageClickWithName:(id)a0 failedItem:(id)a1;
- (void)dismiss;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)viewDidLoad;
- (void)setupUI;
- (void)updateWithModel:(id)a0;

@end
