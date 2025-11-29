@class UILabel, DUXBaseImageView, DUXActionSheet, ACCAnimatedButton, NSString, ACCAIGCCreateLoraModel, NSNumber, DUXAlertDialog;

@interface ACCAIGCLoraDetailInfoViewController : UIViewController <DUXActionSheetDelegate, UINavigationControllerDelegate, ACCAIGCLoraDetailInfoViewControllerProtocol>

@property (retain, nonatomic) DUXBaseImageView *loraPhotoView;
@property (retain, nonatomic) ACCAnimatedButton *backUpButton;
@property (retain, nonatomic) UILabel *headerTitleLabel;
@property (retain, nonatomic) UILabel *loraCreateTime;
@property (retain, nonatomic) ACCAnimatedButton *headerMoreInfoButton;
@property (retain, nonatomic) DUXActionSheet *actionSheet;
@property (retain, nonatomic) DUXAlertDialog *deleteAlertConfirmView;
@property (retain, nonatomic) DUXAlertDialog *createAlertConfirmView;
@property (retain, nonatomic) DUXBaseImageView *deleteResultIconView;
@property (retain, nonatomic) UILabel *deleteMainHintLabel;
@property (retain, nonatomic) UILabel *deleteSubHintLabel;
@property (retain, nonatomic) ACCAnimatedButton *reCreateButton;
@property (retain, nonatomic) ACCAnimatedButton *nextButtonToCreative;
@property (nonatomic) BOOL hadDeleteModel;
@property (nonatomic) BOOL needDeleteModel;
@property (copy, nonatomic) NSNumber *needAfterExecuteBlock;
@property (retain, nonatomic) ACCAIGCCreateLoraModel *createResultModel;
@property (nonatomic) long long loraShowStatus;
@property (nonatomic) long long enterScene;
@property (copy, nonatomic) id /* block */ dismissBlock;
@property (copy, nonatomic) id /* block */ profileModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)actionSheet:(id)a0 didClickButtonAtIndex:(long long)a1;
- (void)actionSheetDidClickCancelButton:(id)a0;
- (void)bindService;
- (void)updateUILayout;
- (void)tapBackUpButton;
- (void)updateUIWithDeleteModelWith:(long long)a0;
- (void)showOriginImage;
- (void)showCreateTime;
- (void)dismissViewWithNeedDeleteModel:(BOOL)a0;
- (id)transEnterFromEnterScene;
- (void)createLoraDataModel:(long long)a0 enterScene:(long long)a1;
- (void)showCreateAlertConfirmView;
- (void)showDeleteAlertConfirmView;
- (void)doRealDeleteLoraModelWith:(id /* block */)a0;
- (void)reCreateLoraModel;
- (void)tapMoreInfoButton;
- (void)tapNextButton;
- (void)deleteAlertViewDidSelect:(BOOL)a0;
- (void)createAlertViewDidSelect:(BOOL)a0;
- (void)navigationController:(id)a0 didShowViewController:(id)a1 animated:(BOOL)a2;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (void)setupUI;
- (void)setupData;

@end
