@class AWENearbyC2ContainerStore, AWENearbyShowHalfScreenShowStatus, AWENearbyC2ContainerCollectionViewLayout, UICollectionView, AWENearbyPageUIConfig, UIViewController, AWENearbyPageScrollConfig, AWENearbyPageDataConfig, AWENearbyGrouponFeedPluginManager, AWENearbyGrouponFeedbackConfig, AWENearbyC2FeedContext, AWENearbyGrouponSegmentHeaderConfig, NSNumber, AWENearbyPageActionCenter, AWENearbyC2SearchContainer;
@protocol AWENearbyGrouponContentCRUDAbility, AWENearbyC2ContainerCollectionViewAbility, AWEXTabBaseChannelControllerProtocol, AWENearbyThemeStyleProtocol;

@interface AWENearbyPageContext : NSObject

@property (readonly, nonatomic) long long grouponFeedbackLongPressActionKey;
@property (weak, nonatomic) AWENearbyGrouponFeedPluginManager *pluginManager;
@property (weak, nonatomic) id<AWENearbyGrouponContentCRUDAbility> contentCRUDAbility;
@property (nonatomic) long long pageType;
@property (retain, nonatomic) AWENearbyPageUIConfig *uiConfig;
@property (retain, nonatomic) AWENearbyPageDataConfig *dataConfig;
@property (retain, nonatomic) AWENearbyPageScrollConfig *scrollConfig;
@property (retain, nonatomic) AWENearbyGrouponSegmentHeaderConfig *headerConfig;
@property (weak, nonatomic) UIViewController *containerVC;
@property (weak, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) AWENearbyC2ContainerCollectionViewLayout *containerLayout;
@property (retain, nonatomic) AWENearbyC2ContainerStore *store;
@property (weak, nonatomic) AWENearbyC2SearchContainer *searchContainer;
@property (retain, nonatomic) AWENearbyShowHalfScreenShowStatus *halfScreenShowStatus;
@property (retain, nonatomic) AWENearbyPageActionCenter *actionCenter;
@property (retain, nonatomic) AWENearbyC2FeedContext *feedContext;
@property (weak, nonatomic) id<AWEXTabBaseChannelControllerProtocol> xtabChannelAblity;
@property (weak, nonatomic) id<AWENearbyThemeStyleProtocol> themeAblity;
@property (weak, nonatomic) id<AWENearbyC2ContainerCollectionViewAbility> collectionViewAblity;
@property (retain, nonatomic) AWENearbyGrouponFeedbackConfig *feedConfig;
@property (retain, nonatomic) NSNumber *preAutoPlayHandlerActiveRectBottom;
@property (nonatomic) BOOL bigCardEnterFullPage;
@property (nonatomic) BOOL bigCardEnterFullPagePreventResignActive;
@property (readonly, nonatomic) BOOL skipInvalidCardAppearEvent;
@property (readonly, nonatomic) BOOL containerIsInWindow;
@property (readonly, nonatomic) BOOL skipInvalidCardAppearEventEnable;

- (id)initWithPageType:(long long)a0;
- (void)tryHideFeedbackViewOnFeedComponent:(id)a0;
- (void)showFeedbackViewOnFeedComponent:(id)a0 longPressGestureRecognizer:(id)a1;
- (void)deleteCards:(id)a0;
- (void)deleteCardWithMode:(unsigned long long)a0 idList:(id)a1;
- (void)deleteCardWithID:(id)a0 cardType:(long long)a1;
- (void).cxx_destruct;
- (void)hideFeedbackView;

@end
