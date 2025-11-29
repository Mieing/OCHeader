@class NSString, UIViewController, NSMutableDictionary;
@protocol AWEChallengeDetailContainerContextProtocol, AWEChallengeDetailFeedFactoryDelegate;

@interface AWEChallengeDetailFeedFactory : NSObject <AWEChallengeDetailBaseFeedViewControllerDelegate>

@property (weak, nonatomic) UIViewController<AWEChallengeDetailContainerContextProtocol> *containerViewController;
@property (retain, nonatomic) UIViewController *feedViewController;
@property (retain, nonatomic) UIViewController *currentFeedViewController;
@property (retain, nonatomic) NSMutableDictionary *subChallengeIds;
@property (weak, nonatomic) id<AWEChallengeDetailFeedFactoryDelegate> delegate;
@property (nonatomic) unsigned long long currentIndexOfFeedViews;
@property (nonatomic) BOOL isMultipleFeedVC;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)factoryWithContainerViewController:(id)a0;

- (void)feedViewControllerDidScrollUp:(id)a0;
- (void)feedViewControllerDidScrollDown:(id)a0;
- (id)createSubFeedViewControllerWithSectionViewModel:(id)a0;
- (void)createFeedViewControllerWithSectionViewModel:(id)a0;
- (void)changeIndexOfFeedViewsIfNeeded:(id)a0;
- (void)selectHeaderVideoAtIndex:(long long)a0;
- (id)multiFeedViewControllerWithSectionViewModel:(id)a0;
- (void)feedDidScrollUp;
- (void)feedDidScrollDown;
- (void).cxx_destruct;

@end
