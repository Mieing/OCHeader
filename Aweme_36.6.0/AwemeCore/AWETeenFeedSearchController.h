@class AWETeenSingleVideoSearchBar, UIView;

@interface AWETeenFeedSearchController : AWETeenFeedBaseController

@property (retain, nonatomic) UIView *returnButton;
@property (retain, nonatomic) AWETeenSingleVideoSearchBar *searchButton;

- (void)hideControlView:(BOOL)a0 animated:(BOOL)a1;
- (void)p_startSearchQualityScene;
- (void)triggerSearchAction:(BOOL)a0;
- (void)p_checkGuideStatus;
- (void)p_addSearchButton;
- (void)viewDidAppear;
- (void).cxx_destruct;
- (void)play;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (void)viewDidLoad;

@end
