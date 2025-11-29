@class AWEPlayInteractionContext, NSString, NSObject;
@protocol AWEFeedAnchorViewManager;

@interface AWEPlayInteractionFeedAnchorManager : NSObject <AWEPlayInteractionFeedAnchorManagerProtocol>

@property (nonatomic) BOOL isAnchorBeingHidden;
@property (retain, nonatomic) NSObject<AWEFeedAnchorViewManager> *anchorViewManager;
@property (weak, nonatomic) AWEPlayInteractionContext *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEPlayInteractionFeedAnchorManagerAdapterClass;

- (BOOL)shouldShowPoiButton;
- (void)configBookAnchorPlayDelegate:(id)a0;
- (void)showShoppingCartExtraTagsWithLoopTimes:(long long)a0;
- (BOOL)isAnchorShouldShowInDelay;
- (BOOL)shouldShowCommonAnchor;
- (BOOL)isBasicConditionForAnchorShowSatisfied;
- (BOOL)shouldShowPrimaryAnchor;
- (id)aAWEPlayInteractionFeedAnchorManagerAdapter;
- (BOOL)shouldActivateAnchor;
- (BOOL)fixDistanceTagBug;
- (void)showLocalLifeAnchorDetail;
- (void)hideAnchorElement:(id)a0 fromClass:(Class)a1 selector:(SEL)a2;
- (BOOL)shouldShowAnchorView;
- (void).cxx_destruct;
- (void)reset;

@end
