@class UIViewController, UIView, AWEHotSpotFeedViewModel, DUXLoadingToast;
@protocol AWEAwemeHotSearchTableViewControllerProtocol;

@interface AWEHotSpotFoldVideoManager : NSObject

@property (retain, nonatomic) UIView *gesBlockView;
@property (retain, nonatomic) DUXLoadingToast *loadingToast;
@property (copy, nonatomic) id /* block */ afterUnfold;
@property (weak, nonatomic) AWEHotSpotFeedViewModel *viewModel;
@property (weak, nonatomic) UIViewController<AWEAwemeHotSearchTableViewControllerProtocol> *containerController;

- (void)unfoldFoldedVideoWithCompletion:(id /* block */)a0;
- (void)afterUnfoldFoldedVideoAction:(long long)a0 error:(id)a1;
- (void)showToastNum:(long long)a0;
- (void)unfoldFoldedVideoData;
- (void)beforeUnfoldFoldedVideoAction;
- (void).cxx_destruct;
- (void)stopBlock;
- (void)startBlock;

@end
