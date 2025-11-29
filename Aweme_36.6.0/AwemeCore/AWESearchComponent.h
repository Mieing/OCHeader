@class AWESearchEventDispather, NSMapTable, NSDictionary, NSString, NSMutableArray;
@protocol AWESearchContainerProtocol, AWESearchComponentProtocol;

@interface AWESearchComponent : NSObject <AWESearchComponentProtocol>

@property (retain, nonatomic) NSMutableArray *subComponents;
@property (retain, nonatomic) NSMutableArray *subPlugins;
@property (retain, nonatomic) NSMapTable *createdComponentMap;
@property (retain, nonatomic) AWESearchEventDispather *eventDispather;
@property (weak, nonatomic) id<AWESearchContainerProtocol> containerContext;
@property (weak, nonatomic) id<AWESearchComponentProtocol> componentContext;
@property (copy, nonatomic) NSDictionary *dictLogExtraInfo;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } frame;
@property (nonatomic) BOOL hidden;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)enableLoadComponentOnNeeded;
+ (BOOL)fixFrameCrash;
+ (id)p_getCreatSubComponentsArrayWithModel:(id)a0;
+ (struct CGSize { double x0; double x1; })componentSizeForModel:(id)a0 width:(double)a1;
+ (BOOL)needUpdateCreatComponentsWithModel:(id)a0;
+ (id)getCreatSubComponentsArrayWithModel:(id)a0;
+ (struct CGSize { double x0; double x1; })reCalculateSizeForModel:(id)a0 width:(double)a1;

- (void)didBecomeActiveForReason:(unsigned long long)a0;
- (void)didResignActiveForReason:(unsigned long long)a0;
- (void)componentDidLoad;
- (void)componentDidRemove;
- (id)subComponentList;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })fixFrameWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateWithModel:(id)a0 forceUpdate:(BOOL)a1;
- (id)getComponentWithClass:(Class)a0;
- (void)componentViewDidAppear:(BOOL)a0;
- (id)subPluginList;
- (void)componentViewDidDisappear:(BOOL)a0;
- (void)componentViewDidEndShowing;
- (void)componentViewDidStartShowing;
- (void)componentViewWillAppear:(BOOL)a0;
- (void)componentViewWillDisappear:(BOOL)a0;
- (void)componentViewDidLoad;
- (void)componentViewLayoutSubviews;
- (void)componentViewPrepareForReuse;
- (void)updateWithChunkModel:(id)a0;
- (id)provideProtocol;
- (id)broadcastProtocolList;
- (id)receiveProtocolList;
- (void)setModelOnly:(id)a0;
- (id)accessibilityElementsArr;
- (void).cxx_destruct;
- (void)addComponent:(id)a0;
- (void)removeComponent:(id)a0;
- (id)componentView;
- (void)updateWithModel:(id)a0;
- (void)removePlugin:(id)a0;
- (void)addPlugin:(id)a0;

@end
