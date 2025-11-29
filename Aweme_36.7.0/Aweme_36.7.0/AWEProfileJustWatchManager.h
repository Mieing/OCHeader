@protocol AWEProfileJustWatchDelegate;

@interface AWEProfileJustWatchManager : NSObject

@property (nonatomic) BOOL canDoItemHighlightAnimation;
@property (nonatomic) unsigned long long state;
@property (nonatomic) BOOL everSomeItemClicked;
@property (nonatomic) BOOL everWatchedItemVisiable;
@property (nonatomic) BOOL everShowedAnimation;
@property (weak, nonatomic) id<AWEProfileJustWatchDelegate> delegate;

+ (id)manager;

- (void)__reset;
- (void)onEventItemSelected:(BOOL)a0;
- (BOOL)onEventWatchedItemUIChanged:(unsigned long long)a0 visiable:(BOOL)a1 isScroll:(BOOL)a2;
- (void)onEventDidPurchaseAnimation;
- (void)onEventLocateAvailable:(BOOL)a0;
- (void)onEventWillBeginLocateItem;
- (void)onEventDidEndLocateItemWithResult:(BOOL)a0;
- (void)onEventWillScrollDuringLocation;
- (void)__checkDismiss;
- (void).cxx_destruct;
- (id)init;

@end
