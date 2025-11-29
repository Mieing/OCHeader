@class AWEUGSceneUndertakeSnackbarView, AWEUGSnackbarViewModel;
@protocol AWEUGSnackbarViewControllerDelegate;

@interface AWEUGSnackbarViewController : NSObject

@property (retain, nonatomic) AWEUGSceneUndertakeSnackbarView *snackbar;
@property (retain, nonatomic) AWEUGSnackbarViewModel *viewModel;
@property (weak, nonatomic) id<AWEUGSnackbarViewControllerDelegate> delegate;

- (void)setupBinding;
- (void)trackLogWithMessage:(id)a0;
- (void)setupSnackbar;
- (void)dismissSnackbar;
- (void).cxx_destruct;
- (id)initWithViewModel:(id)a0;

@end
