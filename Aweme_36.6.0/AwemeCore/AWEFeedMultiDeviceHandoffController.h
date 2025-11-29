@interface AWEFeedMultiDeviceHandoffController : AWEAwemeFeedBaseController

@property (nonatomic) long long lastPlayedIndex;

- (void)cellViewControllerDidRenderFirstFrame:(id)a0;
- (void)donateHandoff:(id)a0;
- (void)viewDidLoad;

@end
