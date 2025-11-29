@class NSString, NSMutableSet;

@interface AWEFeedRetrieveDisableRecommendUserController : AWEBaseController <AWEFeedControllerProtocol>

@property (nonatomic) BOOL shouldStartTrackSkipAweme;
@property (retain, nonatomic) NSMutableSet *skipAwemeSet;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)tableView:(id)a0 didEndDisplayingCellBeforeReset:(id)a1 forRowAtIndexPath:(id)a2;
- (void)videoPlayer:(id)a0 updatePlayTime:(double)a1 totalTime:(double)a2;
- (BOOL)enableRetrieveDisableRecommendUser;
- (void).cxx_destruct;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void)viewDidLoad;

@end
