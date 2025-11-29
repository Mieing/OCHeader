@class NSString;

@interface AWEFeedPreviewVideoContinueController : AWEBaseController <AWEFeedControllerProtocol, AWEPlayletPaymentMessage>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)configureCell:(id)a0 withModel:(id)a1 atIndexPath:(id)a2;
- (void)updatePlayletPaymentInfoWithModels:(id)a0;
- (void)seekTimeIfNeed:(id)a0 model:(id)a1;
- (BOOL)shouldDisableResetRecorderTime;
- (void)refreshWithModels:(id)a0;
- (void)updateRecorderTimeIfNeed:(id)a0 model:(id)a1;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void)viewDidLoad;
- (void)dealloc;
- (void)addObservers;

@end
