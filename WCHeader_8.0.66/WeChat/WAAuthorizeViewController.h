@class WAAuthorizeSheetInfo, NSString, WAAuthPageSheetViewModel, WAAuthorizeResultInfo;
@protocol WAAuthorizeViewControllerDelegate;

@interface WAAuthorizeViewController : ZZFLEXCollectionViewController <IWAAuthorizePage>

@property (nonatomic) long long spaceCellTagOffset;
@property (retain, nonatomic) WAAuthPageSheetViewModel *psViewModel;
@property (weak, nonatomic) id<WAAuthorizeViewControllerDelegate> authDelegate;
@property (retain, nonatomic) WAAuthorizeSheetInfo *info;
@property (readonly, nonatomic) WAAuthorizeResultInfo *resultInfo;
@property (copy, nonatomic) id /* block */ acceptAction;
@property (copy, nonatomic) id /* block */ rejectAction;
@property (copy, nonatomic) id /* block */ cancelAction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithInfo:(id)a0;
- (id)init;
- (void)loadView;
- (void)viewDidLoad;
- (BOOL)shouldInteractivePop;
- (id)navigationBarBackgroundColor;
- (void)reloadData;
- (double)contentHeight;
- (id)subviewClassList;
- (id)customSubviewClassList;
- (id)subViewModel;
- (void)dismissWithCompletion:(id /* block */)a0;
- (void)onCancelButtonClicked;
- (void)onInfoButtonClick;
- (void)onAcceptButtonClick;
- (void)onRejectButtonClick;
- (void)_onRejectButtonClick;
- (double)operateButtonBottomInset;
- (void)openUrl:(id)a0;
- (void)pushVC:(id)a0;
- (void).cxx_destruct;

@end
