@class AWEGrouponPageScrollConfig, UICollectionView, AWEGrouponC2SearchContainer, AWEGrouponFeedPluginManager, AWEGrouponC2ContainerStore, AWEGrouponPageDataConfig, AWEGrouponShowHalfScreenShowStatus, AWEGrouponSegmentHeaderConfig, AWEGrouponFeedbackConfig, UIViewController, AWEGrouponPageUIConfig, AWENearbyC2FeedContext, AWEGrouponC2ContainerCollectionViewLayout;
@protocol AWEGrouponC2ContainerCollectionViewAbility, AWEGrouponContentCRUDAbility, AWEXTabBaseChannelControllerProtocol, AWENearbyThemeStyleProtocol;

@interface AWEGrouponPageContext : NSObject

@property (readonly, nonatomic) long long grouponFeedbackLongPressActionKey;
@property (weak, nonatomic) AWEGrouponFeedPluginManager *pluginManager;
@property (weak, nonatomic) id<AWEGrouponContentCRUDAbility> contentCRUDAbility;
@property (nonatomic) long long pageType;
@property (retain, nonatomic) AWEGrouponPageUIConfig *uiConfig;
@property (retain, nonatomic) AWEGrouponPageDataConfig *dataConfig;
@property (retain, nonatomic) AWEGrouponPageScrollConfig *scrollConfig;
@property (retain, nonatomic) AWEGrouponSegmentHeaderConfig *headerConfig;
@property (weak, nonatomic) UIViewController *containerVC;
@property (weak, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) AWEGrouponC2ContainerCollectionViewLayout *containerLayout;
@property (retain, nonatomic) AWEGrouponC2ContainerStore *store;
@property (weak, nonatomic) AWEGrouponC2SearchContainer *searchContainer;
@property (retain, nonatomic) AWEGrouponShowHalfScreenShowStatus *halfScreenShowStatus;
@property (retain, nonatomic) AWENearbyC2FeedContext *feedContext;
@property (weak, nonatomic) id<AWEXTabBaseChannelControllerProtocol> xtabChannelAblity;
@property (weak, nonatomic) id<AWENearbyThemeStyleProtocol> themeAblity;
@property (weak, nonatomic) id<AWEGrouponC2ContainerCollectionViewAbility> collectionViewAblity;
@property (retain, nonatomic) AWEGrouponFeedbackConfig *feedConfig;
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
