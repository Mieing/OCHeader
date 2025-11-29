@class AWEProfileGuidePopoverHelper, AWEPriorityQueue, NSDictionary, NSString, UIViewController;
@protocol AWEProfileBubbleManagerAWEBubbleDelegate;

@interface AWEProfileBubblePriorityQueueManager : NSObject <AWEPriorityQueueElementProtocol, AWEProfileBubblePriorityQueueManagerProtocol>

@property (retain, nonatomic) AWEPriorityQueue *homePageQueue;
@property (retain, nonatomic) AWEPriorityQueue *moreBtnQueue;
@property (weak, nonatomic) AWEProfileGuidePopoverHelper *popoverHelper;
@property (nonatomic) BOOL canAutomaticallyShowAfterRebuild;
@property (weak, nonatomic) UIViewController<AWEProfileBubbleManagerAWEBubbleDelegate> *delegateForAWEBubble;
@property (weak, nonatomic) id<AWEProfileBubbleManagerAWEBubbleDelegate> delegateForMoreBtnBubble;
@property (retain, nonatomic) NSDictionary *priorityOfBubbles;
@property (nonatomic) BOOL notShowCreateAweme;
@property (nonatomic) long long priority;
@property (weak, nonatomic) AWEPriorityQueue *queue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEProfileBubblePriorityQueueCommonAdapterClass;
+ (id)sharedInstance;

- (void)hideAllBubbleViews;
- (void)showAllBubbleViews;
- (void)rebuildPriorityQueue:(unsigned long long)a0;
- (id)currentElementForQueue:(unsigned long long)a0;
- (void)popHighestPriorityBubbleIfBubbleTypeEqutalTo:(unsigned long long)a0 inQueue:(unsigned long long)a1;
- (void)popHighestPriorityBubbleInQueue:(unsigned long long)a0;
- (void)languageChanging;
- (BOOL)p_showAWEBubbleWithElement:(id)a0;
- (id)p_getAWEUINotificationBarView:(unsigned long long)a0;
- (id)p_getCustomBubbleWithElement:(id)a0;
- (void)p_showSpecificationBottomViewElement:(id)a0;
- (void)p_rebuildHomePageQueue;
- (void)showHighestPriorityBubbleInQueue:(unsigned long long)a0;
- (void)p_rebuildMoreBtnQueue;
- (BOOL)shouldShowByEnvWithType:(unsigned long long)a0;
- (BOOL)enableBackgroundLight;
- (id /* block */)popBlockWithBlock:(id /* block */)a0;
- (void)p_buildQueue:(id)a0 startType:(unsigned long long)a1 endType:(unsigned long long)a2;
- (id)p_getQueueElementForType:(unsigned long long)a0;
- (id)aAWEProfileBubblePriorityQueueCommonAdapter;
- (BOOL)isQueueEmpty;
- (BOOL)updateModel:(id)a0 forType:(unsigned long long)a1;
- (void)removeAllBubbleInQueue:(unsigned long long)a0;
- (unsigned long long)bubbleTypeCount:(unsigned long long)a0;
- (BOOL)enablePrivatePostTab;
- (id)p_AWEUINotificationBarView:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
