@class NSString, UIViewController, NSMutableDictionary;

@interface ACCSystemGestureServiceImpl : NSObject <ACCSystemGestureService>

@property (weak, nonatomic) UIViewController *hostVC;
@property (retain, nonatomic) NSMutableDictionary *edgeDic;
@property (readonly, nonatomic) unsigned long long finalScreenEdgesDeferringSystemGestures;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)addPreferredScreenEdges:(unsigned long long)a0 forServiceKey:(id)a1;
- (void)removePreferredScreenEdgesForServiceKey:(id)a0;
- (void)setNeedsUpdate;
- (void).cxx_destruct;
- (id)initWithHostViewController:(id)a0;

@end
