@class NSMutableDictionary;
@protocol AnnieLiveBizCardProviderProtocolAdapter;

@interface IESLiveInteractDynamicContainerPool : NSObject

@property (retain, nonatomic) NSMutableDictionary *caches;
@property (retain, nonatomic) id<AnnieLiveBizCardProviderProtocolAdapter> annieXCardProvider;
@property (retain, nonatomic) NSMutableDictionary *containerReuseInfo;

+ (id)sharedInstance;

- (id)keyWithSchema:(id)a0;
- (BOOL)shouldUseAnnieXCardViewWithKey:(id)a0;
- (BOOL)shouldReuseWithKey:(id)a0;
- (id)popHybridContainer:(id)a0;
- (BOOL)pushHybridContainer:(id)a0;
- (id)hybridContainerWithSchema:(id)a0 preferredFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 onView:(id)a2 diContext:(id)a3 customGlobalProps:(id)a4 initialData:(id)a5;
- (void)releaseHybridContainer:(id)a0;
- (id)containerTrackInfo;
- (void).cxx_destruct;
- (id)init;

@end
