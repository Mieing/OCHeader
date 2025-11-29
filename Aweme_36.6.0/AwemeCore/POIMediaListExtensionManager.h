@class NSMutableDictionary, NSString, POIMediaListPageContext, NSMutableArray, UIViewController;
@protocol POIMediaListViewControllerProtocol;

@interface POIMediaListExtensionManager : NSObject <POIMediaListExtensionLifeCycleProtocol>

@property (retain, nonatomic) NSMutableArray *extensionsArray;
@property (retain, nonatomic) NSMutableDictionary *selectorCacheDict;
@property (retain, nonatomic) NSMutableDictionary *protocolCacheDict;
@property (weak, nonatomic) POIMediaListPageContext *context;
@property (weak, nonatomic) UIViewController<POIMediaListViewControllerProtocol> *vc;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)removeExtension:(id)a0;
- (void)initializeExtension;
- (id)extensionByProtocol:(id)a0;
- (void)addExtension:(id)a0 customInitializeBlock:(id /* block */)a1;
- (id)extensionsBySelector:(SEL)a0;
- (void)removeAllExtension;
- (id)extensionsByProtocol:(id)a0;
- (id)extensionBySelector:(SEL)a0;
- (void).cxx_destruct;
- (void)addExtension:(id)a0;
- (void)resetCache;
- (void)forwardInvocation:(id)a0;

@end
