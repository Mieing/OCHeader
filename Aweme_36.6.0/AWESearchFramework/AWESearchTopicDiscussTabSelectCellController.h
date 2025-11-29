@class UIView, AWEModernFeedCellModel, NSArray, AWEGeneralSearchModel, AWESearchAvatarCarouselView, DUXBaseLabel, NSString, AWESearchCachalotResultContext, AWESearchTracker;
@protocol AWEModernFeedCellContext;

@interface AWESearchTopicDiscussTabSelectCellController : UIViewController <AWESearchCachalotCardViewProtocol, AWEModernFeedCellControllerProtocol>

@property (retain, nonatomic) AWEGeneralSearchModel *model;
@property (retain, nonatomic) UIView *bgView;
@property (retain, nonatomic) DUXBaseLabel *generalTab;
@property (retain, nonatomic) DUXBaseLabel *discussTab;
@property (retain, nonatomic) DUXBaseLabel *currentTab;
@property (copy, nonatomic) NSArray *tabList;
@property (retain, nonatomic) UIView *lineView;
@property (retain, nonatomic) AWESearchAvatarCarouselView *carouselView;
@property (retain, nonatomic) AWESearchCachalotResultContext *cachalotContext;
@property (retain, nonatomic) AWESearchTracker *tracker;
@property (retain, nonatomic) AWEModernFeedCellModel *dataModel;
@property (nonatomic) BOOL isSticking;
@property (nonatomic) BOOL isChangingTab;
@property (nonatomic) BOOL isLoadingTabData;
@property (retain, nonatomic) id<AWEModernFeedCellContext> context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) Class cardClass;

+ (double)modernFeedCellPreferedHeightForModel:(id)a0 width:(double)a1;
+ (struct CGSize { double x0; double x1; })sizeWithViewModel:(id)a0 width:(double)a1;
+ (double)modernFeedCellPreferedMarginForModel:(id)a0;
+ (double)totalHeight;

- (void)configUI;
- (void)trackShow;
- (void)componentStickyStatusChange:(BOOL)a0;
- (void)componentClicked;
- (void)componentWillDisplay;
- (void)componentDidEndDisplay;
- (id)commonTrackerParams;
- (void)generalTabClicked;
- (void)discussTabClicked;
- (void)p_tabChangedAction:(long long)a0 tabView:(id)a1 fromUserClick:(BOOL)a2;
- (id)tabKeyOfTabView:(id)a0;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (void)prepareForReuse;
- (id)componentView;
- (void)updateColor;
- (void)updateWithViewModel:(id)a0;
- (void)updateWithModel:(id)a0;

@end
