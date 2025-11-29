@class AWEAwemeModel, UIView, AWENearByOriginalAdModel, NSArray, NSDictionary, CMCPlayInteractionContext, UIViewController, NSIndexPath;

@interface CMCFeedContext : CMCContext

@property (retain, nonatomic) NSArray *dataSource;
@property (nonatomic) BOOL isRecommendationFeed;
@property (copy, nonatomic) id /* block */ awemeAtIndex;
@property (weak, nonatomic) UIView *playerView;
@property (weak, nonatomic) UIView *tableViewCell;
@property (weak, nonatomic) UIView *interactionView;
@property (copy, nonatomic) id /* block */ countForAweme;
@property (copy, nonatomic) id /* block */ playIfActivated;
@property (copy, nonatomic) id /* block */ deleteAwemeWithIDs;
@property (copy, nonatomic) id /* block */ removePrerenderedAweme;
@property (nonatomic) BOOL animated;
@property (weak, nonatomic) NSIndexPath *indexPath;
@property (weak, nonatomic) AWEAwemeModel *curAweme;
@property (weak, nonatomic) UIViewController *curPlayerController;
@property (nonatomic) unsigned long long tapTargeType;
@property (nonatomic) double currPlaybackTime;
@property (weak, nonatomic) NSArray *awesomeSplashList;
@property (weak, nonatomic) AWENearByOriginalAdModel *nearByAdModel;
@property (nonatomic) long long type;
@property (nonatomic) struct CGPoint { double x; double y; } velocity;
@property (nonatomic) long long currentPlayIndex;
@property (copy, nonatomic) NSDictionary *prerenderAwemes;
@property (nonatomic) BOOL isInitialFetch;
@property (weak, nonatomic) CMCPlayInteractionContext *interactionContext;

- (void).cxx_destruct;

@end
