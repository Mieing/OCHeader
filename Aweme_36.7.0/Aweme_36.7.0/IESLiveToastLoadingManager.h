@class IESLiveToastLoadingViewController;

@interface IESLiveToastLoadingManager : NSObject

@property (retain, nonatomic) IESLiveToastLoadingViewController *currentShowingToast;

+ (id)sharedToastLoadingManager;

- (void)dismissCurrentToastLoading;
- (void)loadingToastViewIsShowing:(id)a0;
- (void)loadingToastViewIsHidden:(id)a0;
- (void).cxx_destruct;

@end
