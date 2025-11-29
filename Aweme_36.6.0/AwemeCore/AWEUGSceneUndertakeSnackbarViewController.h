@class AWEUGSceneUndertakeSnackbarView, AWEUGSceneUndertakeSnackbarViewModel;
@protocol AWEUGSceneUndertakeSnackbarViewControllerDelegate;

@interface AWEUGSceneUndertakeSnackbarViewController : NSObject

@property (retain, nonatomic) AWEUGSceneUndertakeSnackbarView *snackbar;
@property (retain, nonatomic) AWEUGSceneUndertakeSnackbarViewModel *viewModel;
@property (weak, nonatomic) id<AWEUGSceneUndertakeSnackbarViewControllerDelegate> delegate;

- (void)setupBinding;
- (void)trackLogWithMessage:(id)a0;
- (void)setupSnackbar;
- (void)dismissSnackbar;
- (void).cxx_destruct;
- (id)initWithViewModel:(id)a0;

@end
