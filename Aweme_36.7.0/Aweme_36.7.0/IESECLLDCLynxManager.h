@class NSString, NSMutableDictionary;

@interface IESECLLDCLynxManager : NSObject <IESHYHybridViewLifecycleProtocol>

@property (retain, nonatomic) NSMutableDictionary *viewMap;
@property (retain, nonatomic) NSMutableDictionary *viewMapLoaded;
@property (retain, nonatomic) NSMutableDictionary *lynxCardMap;
@property (retain, nonatomic) NSMutableDictionary *heightMap;
@property (retain, nonatomic) NSMutableDictionary *simpleViewMap;
@property (copy, nonatomic) NSString *pageIdentifier;
@property (nonatomic) BOOL rendered;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)getCurrentTimeStamp;
+ (id)getLynxKitviewFromContainer:(id)a0;

- (void)viewDidChangeIntrinsicContentSize:(struct CGSize { double x0; double x1; })a0 withContainerID:(id)a1;
- (id)getLynxViewWithModel:(id)a0 pageIdentifier:(id)a1 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (id)getLynxCardWithElement:(id)a0 afterLoad:(BOOL)a1;
- (id)lynxViewWithPageIdentifier:(id)a0;
- (double)getHeightFromIdentifier:(id)a0;
- (id)initWithPageIdentifier:(id)a0;
- (id)getLynxCardWithElement:(id)a0;
- (void)clearUselessCard;
- (void)loadAfterLynxView;
- (id)getStandardViewWithElement:(id)a0;
- (id)getLynxCardWithURL:(id)a0 data:(id)a1 size:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 needReload:(BOOL)a3;
- (void)preloadLynxViewWithModel:(id)a0 pageIdentifier:(id)a1 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (id)getStandardViewWithElement:(id)a0 delegate:(id)a1 extraQueryParams:(id)a2;
- (id)stdReuseMap;
- (void)setStdReuseMap:(id)a0;
- (id)p_genLynxCardWithModel:(id)a0 Identifier:(id)a1 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (void)p_updateLynxCardWithModel:(id)a0 Identifier:(id)a1;
- (void)registerSizeChangedHandlerBlock:(id /* block */)a0 currentView:(id)a1;
- (void).cxx_destruct;
- (id)getIdentifier;
- (void)dealloc;
- (void)deviceOrientationDidChange:(id)a0;

@end
