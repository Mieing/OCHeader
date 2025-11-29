@class AWEBubble, AWENearbyBubbleInfoModel, NSString, AWENearbyActivityBubbleResource, AWENearbyActivityResourceModel;

@interface AWESocialBubbleManager : NSObject <AWESocialHeartbeatMessage, AWEInnerNotificationMessage>

@property (weak, nonatomic) AWEBubble *toastingBubble;
@property (weak, nonatomic) AWEBubble *toastingTC21Bubble;
@property (copy, nonatomic) id /* block */ delayShowBubbleBlock;
@property (nonatomic) BOOL isShowingBubble;
@property (retain, nonatomic) AWENearbyBubbleInfoModel *bubbleInfoModel;
@property (retain, nonatomic) AWENearbyActivityResourceModel *tc21Resource;
@property (retain, nonatomic) AWENearbyActivityBubbleResource *tc21BubbleResource;
@property (nonatomic) BOOL shouldShowBubbleAfterSplash;
@property (nonatomic) BOOL shouldShowBubbleWithPageAppear;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)supplementShowTC1BubbleIfNeeded;
- (void)cancelShowTC21Bubble;
- (void)dismissBubbleIfNeeded;
- (void)innerNotificationWillDisplay:(id)a0;
- (void)tabBarDidChangeNotification:(id)a0;
- (void)splashDidDisappear:(id)a0;
- (void)heartbeatDidChange:(id)a0;
- (BOOL)isOtherGuideBubbleShowing;
- (id)tabbarNearbyTab;
- (void)removeNearbyBubble;
- (void)saveBubbleShowedWithModel:(id)a0;
- (void)saveTC21BubbleShowedStatus;
- (void)dismissBubble:(id)a0 completion:(id /* block */)a1;
- (void)removeTC21NearbyBubble;
- (BOOL)canShowBubbleWithModel:(id)a0;
- (void)showBubbleWithModel:(id)a0;
- (id)keyForActivityID:(id)a0;
- (BOOL)hasExceedTC21BubbleShowCountLimit;
- (void)tapToDismissTC21Bubble;
- (void)showTC21BubbleIfNeededWithDelay:(long long)a0;
- (BOOL)__shouldShowTC21BubbleResource;
- (void)__increaseShowedCount;
- (id)__keyForCacheWithActivityID:(long long)a0;
- (id)__cacheInfoWithActivityID:(long long)a0;
- (void)__cacheTodayDateIntoPeroidWithCacheInfoModel:(id)a0;
- (id)__dateKeyWithDate:(id)a0;
- (void)updateTC21BubbleModel:(id)a0;
- (void)applicationWillResignActive:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (double)currentTimeStamp;

@end
