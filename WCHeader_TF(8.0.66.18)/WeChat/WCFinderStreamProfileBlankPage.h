@class UILabel, WCFinderAnimationLoadingView, NSString;

@interface WCFinderStreamProfileBlankPage : WCFinderStreamProfileViewPage <WCFinderStreamProfileBlankModelDelegate>

@property (retain, nonatomic) UILabel *textLabel;
@property (retain, nonatomic) WCFinderAnimationLoadingView *loadingView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)loadView;
- (void)viewDidLoad;
- (void)onPageSizeDidChanged;
- (void)viewWillApear;
- (void)updateFrame;
- (void)updateState;
- (void)onClickRetry;
- (void)onProfileStatePageDataChanged;
- (void).cxx_destruct;

@end
