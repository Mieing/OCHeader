@class UITableView, NSString, NSDictionary, NSNumber, UIViewController;
@protocol IESLivePlayerProtocol;

@interface AWELivePluginAwemeLiveTableViewCell : UITableViewCell <AWEAwemeLiveTableViewCellProtocol, AWEAwemeContainerTableViewCellPreloadProtocol>

@property (copy, nonatomic) NSString *roomID;
@property (weak, nonatomic) UIViewController *parentVC;
@property (weak, nonatomic) UITableView *parentTableView;
@property (copy, nonatomic) NSDictionary *logExtraDict;
@property (weak, nonatomic) id<IESLivePlayerProtocol> livePlayer;
@property (nonatomic) BOOL canSlide;
@property (nonatomic) long long indexPath;
@property (copy, nonatomic) NSString *actionType;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *enterMethod;
@property (copy, nonatomic) NSString *trendingKeyWord;
@property (copy, nonatomic) NSString *themeTemplateId;
@property (copy, nonatomic) NSString *challengeID;
@property (copy, nonatomic) NSString *challengePage;
@property (copy, nonatomic) NSString *anchorID;
@property (copy, nonatomic) NSString *searchType;
@property (copy, nonatomic) NSString *searchID;
@property (copy, nonatomic) NSString *searchResultID;
@property (copy, nonatomic) NSDictionary *searchParams;
@property (nonatomic) BOOL isActive;
@property (copy, nonatomic) NSNumber *docID;
@property (nonatomic) BOOL isFromHorizontalSearch;
@property (copy, nonatomic) NSDictionary *ecomLiveParams;
@property (copy, nonatomic) NSString *liveRecommendInfo;
@property (nonatomic) unsigned long long exitLiveRoomType;
@property (readonly, nonatomic) UIViewController *viewController;
@property (nonatomic) BOOL isEcomLiveVideoHybrid;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL hadPrepareToDisplay;

+ (id)reuseIdentifier;

- (void)configWithModel:(id)a0;
- (void)showAutoShowPipPanel;
- (BOOL)enableShowAutoShowPipPanel;
- (void)configBottomOffset:(double)a0;
- (void)playLive;
- (void)pauseLive;
- (void)resumeLive;
- (void)stopLive;
- (void)slideToOtherFeed;
- (void).cxx_destruct;

@end
