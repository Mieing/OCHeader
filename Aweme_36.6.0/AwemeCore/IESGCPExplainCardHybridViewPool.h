@class NSString, NSMutableArray;

@interface IESGCPExplainCardHybridViewPool : NSObject <IESGCPExplainCardHybridViewInterface>

@property (retain, nonatomic) NSMutableArray *lynxCardViewArray;
@property (nonatomic) unsigned long long currentLynxVersion;
@property (readonly, nonatomic) struct CGSize { double width; double height; } containerSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (BOOL)enableAnnieXContainer;
- (BOOL)hybridViewReuseEnable;
- (id)getIdleHybridView;
- (void)updateHybridViewIdleStatusWithHybridView:(id)a0 isIdle:(BOOL)a1;
- (BOOL)shouldPreloadHybridView;
- (id)getHybridViewWithURL:(id)a0 initialData:(id)a1 diContext:(id)a2 parentView:(id)a3 isReuse:(BOOL *)a4;
- (void)releaseHybridViewIfNeed:(id)a0;
- (void)destroyHybridViewIfNeed:(id)a0;
- (void)preloadHybridViewIfNeed;
- (void)removeHybridView:(id)a0;
- (void).cxx_destruct;

@end
