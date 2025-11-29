@class NSMutableDictionary, NSTimer, NSMapTable, NSString;

@interface AWEScreenCastFloatingViewManager : NSObject <AWEScreenCastFloatingViewDelegate, AWEScreenCastFloatingViewService>

@property (retain, nonatomic) NSMutableDictionary *showingFlags;
@property (retain, nonatomic) NSMapTable *delegates;
@property (retain, nonatomic) NSMutableDictionary *floatingViews;
@property (retain, nonatomic) NSTimer *delayHiddenTimer;
@property (retain, nonatomic) NSString *lastItemID;
@property (nonatomic) BOOL needChangeShowingState;
@property (nonatomic) BOOL needDelayHidden;
@property (nonatomic) BOOL floatingViewShowed;
@property (nonatomic) BOOL ignoreTipsShow;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)feedCanPullRefresh:(id)a0;
- (void)changeShowingStateIfNeeded;
- (void)containerSizeChange;
- (void)updateShowing:(BOOL)a0 forScene:(long long)a1 identifier:(id)a2;
- (void)updateDelegate:(id)a0 forScene:(long long)a1;
- (double)maxYForScreenCastFloatingView:(id)a0 position:(long long)a1;
- (void)changeShowingState;
- (long long)showTypeForScene:(long long)a0;
- (void)showFloatingViewForScene:(long long)a0 type:(long long)a1;
- (void)hideFloatingViewForScene:(long long)a0;
- (void)hanldeClickAction:(id)a0;
- (void).cxx_destruct;
- (void)invalidateTimer;
- (void)dealloc;

@end
