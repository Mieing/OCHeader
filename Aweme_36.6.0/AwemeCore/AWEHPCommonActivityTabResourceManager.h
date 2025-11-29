@class NSString, NSArray, AWEHomepageTimer, MMKV, NSMutableDictionary, AWEFeedActivityTopBarItemImageModel, AWEFeedActivityBadgeModel, AWEFeedActivityTopBarItemConfig, AWEFeedActivityBubbleModel;
@protocol AWEHPCommonActivityTabResourceManagerDelegate;

@interface AWEHPCommonActivityTabResourceManager : NSObject <AWEHomepageTimerObserver>

@property (copy, nonatomic) NSString *activityID;
@property (retain, nonatomic) AWEHomepageTimer *timer;
@property (retain, nonatomic) MMKV *mmkv;
@property (retain, nonatomic) NSMutableDictionary *consumedDict;
@property (copy, nonatomic) NSString *defaultTitle;
@property (retain, nonatomic) AWEFeedActivityTopBarItemConfig *topBarItemConfig;
@property (copy, nonatomic) NSArray *badgeArray;
@property (copy, nonatomic) NSArray *bubbleArray;
@property (retain, nonatomic) AWEFeedActivityTopBarItemImageModel *currentTopBarItem;
@property (retain, nonatomic) AWEFeedActivityBadgeModel *currentBadge;
@property (retain, nonatomic) AWEFeedActivityBubbleModel *currentBubble;
@property (weak, nonatomic) id<AWEHPCommonActivityTabResourceManagerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onFireWithTimer:(id)a0;
- (void)consumeCurrentBadge;
- (void)consumeCurrentBubble;
- (id)initWithActivityID:(id)a0 topBarItemConfig:(id)a1 badgeArray:(id)a2 bubbleArray:(id)a3 delegate:(id)a4;
- (void)startCheckStatus;
- (id)mmkvConsumedDict;
- (void)setupTopBarItemConfig:(id)a0;
- (void)setupBadge:(id)a0;
- (void)setupBubble:(id)a0;
- (void)checkTopBarItemImagesWithServerTime:(double)a0;
- (void)checkBadgeWithServerTime:(double)a0;
- (void)checkBubbleWithServerTime:(double)a0;
- (void)checkStatusIfNeed;
- (void).cxx_destruct;

@end
