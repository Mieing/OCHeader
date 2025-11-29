@class IESPlatformSDKContentSyncReq, AWEVCDImportFansModel, NSString, AWEVCDImportFansView;

@interface AWEVCDImportFansViewController : UIViewController <AWEVCDImportFansViewDelegate>

@property (retain, nonatomic) IESPlatformSDKContentSyncReq *contentSyncReq;
@property (copy, nonatomic) id /* block */ completedBlock;
@property (retain, nonatomic) AWEVCDImportFansModel *model;
@property (retain, nonatomic) AWEVCDImportFansView *importFansView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dismissDidEnterBackgroundWithCompletion:(id /* block */)a0;
- (id)initWithAuthReq:(id)a0 userInfo:(id)a1 completedBlock:(id /* block */)a2;
- (void)actionDidTapActionButton:(id)a0;
- (void)setNavigationBar;
- (void)showFailAlert:(id)a0;
- (void)actionDidTapCancelAuthButton:(id)a0;
- (void).cxx_destruct;
- (void)dismissViewControllerAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (void)viewDidLoad;
- (void)dismissSelf;

@end
