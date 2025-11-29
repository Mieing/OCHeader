@class WAAuthorizeSheetInfo, WAAuthorizeResultInfo, WAAuthPageSheetViewModel, UICollectionView, NSString, ZZFLEXAngel;
@protocol WAAuthorizePageSheetDelegate;

@interface WAAuthorizePageSheet : WAPageSheet <IWAAuthorizePage>

@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) ZZFLEXAngel *angel;
@property (retain, nonatomic) WAAuthPageSheetViewModel *psViewModel;
@property (weak, nonatomic) id<WAAuthorizePageSheetDelegate> authDelegate;
@property (retain, nonatomic) WAAuthorizeSheetInfo *info;
@property (readonly, nonatomic) WAAuthorizeResultInfo *resultInfo;
@property (copy, nonatomic) id /* block */ acceptAction;
@property (copy, nonatomic) id /* block */ rejectAction;
@property (copy, nonatomic) id /* block */ showPrivacyInfoAction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithInfo:(id)a0;
- (id)init;
- (double)contentHeight;
- (void)setupUI;
- (void)reloadData;
- (void)layoutSubViews;
- (void)showInView:(id)a0 completion:(id /* block */)a1;
- (id)subviewClassList;
- (id)customSubviewClassList;
- (id)subViewModel;
- (void)pageSheetWillAppear:(id)a0;
- (void)onInfoButtonClick;
- (void)onAcceptButtonClick;
- (void)onRejectButtonClick;
- (void)openUrl:(id)a0;
- (void)pushVC:(id)a0;
- (void).cxx_destruct;

@end
