@class NSDictionary, NSString;

@interface AWEFeedDetectSoundLeakController : AWEBaseController <AWEFeedControllerProtocol, AWEFeedPlayControlServiceListenerProtocol>

@property (copy, nonatomic) NSDictionary *channelInfoMap;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)willEnterUserProfileViewController;
- (void)tableView:(id)a0 didDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void)configureCell:(id)a0 withModel:(id)a1 atIndexPath:(id)a2;
- (id)shouldPreventPlayBeforePlayStateChanged;
- (BOOL)isCurrentChannelMatch:(id)a0;
- (void)trackChannelMismatchWithCurrentChannel:(id)a0;
- (void).cxx_destruct;
- (void)pause;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;

@end
