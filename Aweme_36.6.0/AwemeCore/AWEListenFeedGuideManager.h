@interface AWEListenFeedGuideManager : NSObject

+ (void)showGestureGuideView:(id)a0 inView:(id)a1;
+ (BOOL)needShowTopToastGuideView;
+ (void)showTopToastGuideView:(id)a0 inView:(id)a1;
+ (void)updateHasShowListenEntranceGuideViewFor5Key;
+ (void)updateHasShowListenEntranceGuideViewForFirstEnterKey;
+ (void)showListenFeedPopupView:(id)a0 model:(id)a1 inView:(id)a2;
+ (void)showEntranceGuideView:(id)a0 inView:(id)a1 targetPoint:(struct CGPoint { double x0; double x1; })a2;
+ (BOOL)isShowListenFeedPopupView;
+ (BOOL)isShowGestureGuideView;
+ (BOOL)shouldShowCollectGuideView;
+ (void)updateEnterListenFeedKey;
+ (void)updateListenFeedCountGreaterThan5Key;
+ (id)sharedInstance;

@end
