@class NSString, NSMutableDictionary;

@interface IESLiveInteractPreLynxViewManager : NSObject <IESHYHybridViewLifecycleProtocol, IESLiveInteractPreLynxViewService>

@property (retain, nonatomic) NSMutableDictionary *preLynxViewDict;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (void)viewDidLoadFailedWithUrl:(id)a0 error:(id)a1;
- (id)getPreLynxViewWithKey:(id)a0;
- (void)removePreLynxViewWithKey:(id)a0;
- (void)preloadLynxViewWithKey:(id)a0 schema:(id)a1 preferFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (void).cxx_destruct;

@end
