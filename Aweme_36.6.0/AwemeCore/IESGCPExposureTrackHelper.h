@class NSTimer, NSMutableDictionary, UIView;

@interface IESGCPExposureTrackHelper : NSObject

@property (retain, nonatomic) UIView *rootView;
@property (retain, nonatomic) NSMutableDictionary *preEndViewKeysMap;
@property (retain, nonatomic) NSTimer *timer;

+ (double)exposureAreaRatioOfCell:(id)a0;
+ (BOOL)isShowOnWindowWithView:(id)a0;

- (void)trackShowForStrategy;
- (void)trackShowForStrategyWithView:(id)a0;
- (void)onUITracking;
- (id)initWithRootView:(id)a0;
- (id)findExposedAbleViews:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;

@end
