@class MMLoadingView, NSString, GetA8KeyLogic, OpenProfileLogicHelper, OpenProfileData;
@protocol OpenProfileBlockViewControllerDelegate;

@interface OpenProfileBlockViewController : MMUIViewController <OpenProfileLogicHelperDelegate> {
    OpenProfileData *_infoData;
    OpenProfileLogicHelper *_logicHelper;
    MMLoadingView *_loadingView;
    GetA8KeyLogic *_a8KeyLogic;
}

@property (weak, nonatomic) id<OpenProfileBlockViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithInfoData:(id)a0;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)showFailViewWithErrMsg:(id)a0;
- (void)onReturn;
- (void)onOpenProfile:(int)a0 WithErrMsg:(id)a1 WithContact:(id)a2 Ticket:(id)a3;
- (void).cxx_destruct;

@end
