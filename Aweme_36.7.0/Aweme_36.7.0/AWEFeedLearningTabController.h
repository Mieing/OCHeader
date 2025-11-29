@class NSString;

@interface AWEFeedLearningTabController : AWEBaseController <AWEFeedControllerProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)configureCell:(id)a0 withModel:(id)a1 atIndexPath:(id)a2;
- (void)viewDidLoad;

@end
