@class NSString;

@interface AWEAwemeDetailFriendsController : AWEAwemeNewDetailBaseController <AWEAwemeNewDetailTableControllerProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAFDServiceDOUYINInterestSocialAdapterClass;

- (void)cellWillDisplay:(id)a0 forRowAtIndexPath:(id)a1 tableView:(id)a2;
- (void)registerTableViewCell:(id)a0;
- (void)currentPlayVideoDidChangePlayState:(long long)a0;
- (void)videoPlayer:(id)a0 updatePlayTime:(double)a1 totalTime:(double)a2;
- (void)configCell:(id)a0 atIndexPath:(id)a1 tableView:(id)a2;
- (id)aAFDServiceDOUYINInterestSocialAdapter;
- (void)showRecommendMeToOthersGuideIfNeed;
- (void)configInteractionTypeWithCell:(id)a0 model:(id)a1;
- (void)play;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;

@end
