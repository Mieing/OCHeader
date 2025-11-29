@class MMLoadingView, NSString, JumpToBizWebviewLogicHelper, JumpToBizWebviewData;
@protocol JumpToBizWebviewBlockViewControllerDelegate;

@interface JumpToBizWebviewBlockViewController : MMUIViewController <JumpToBizWebviewLogicHelperDelegate> {
    JumpToBizWebviewData *_infoData;
    JumpToBizWebviewLogicHelper *_logicHelper;
    MMLoadingView *_loadingView;
}

@property (weak, nonatomic) id<JumpToBizWebviewBlockViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithInfoData:(id)a0;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)showFailViewWithErrMsg:(id)a0;
- (void)onReturn;
- (void)onJumpToBizWebview:(int)a0 WithErrMsg:(id)a1 WithUrl:(id)a2;
- (void).cxx_destruct;

@end
