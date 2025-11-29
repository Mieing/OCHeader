@class NSArray, NSMutableDictionary, BDMannorComponentManagerContext, NSString;

@interface BDMannorComponentManager : NSObject

@property (retain, nonatomic) BDMannorComponentManagerContext *context;
@property (copy, nonatomic) NSArray *sortedComponentTypeArray;
@property (retain, nonatomic) NSMutableDictionary *componentErrorDict;
@property (readonly, nonatomic) NSString *scene;

- (id)adComponentWithComponentType:(id)a0;
- (void)bindAd;
- (void)addAdComponent:(id)a0 withCompoentType:(id)a1;
- (void)broadcastEventToComponent:(id)a0 params:(id)a1;
- (void)destoryAd;
- (void)checkDowndgradeWithComponentID:(id)a0 completion:(id /* block */)a1;
- (BOOL)checkAdComponentShowStatusWith:(id)a0;
- (void)p_configComponentListOrder;
- (void)p_registerEventContext;
- (void)p_sendComponentCreateAdFailLogWith:(id)a0 componentType:(id)a1 errorCode:(long long)a2;
- (id)getTrackedScene:(id)a0;
- (id)p_createComponentWith:(id)a0;
- (void)p_addAdComponent:(id)a0 forKey:(id)a1;
- (void)p_bindAd;
- (void)p_sendComponentManagerCreateAdFailLogWith:(id)a0 extraDict:(id)a1;
- (id)createComponentWith:(id)a0;
- (id)getComponentErrorMessage;
- (id)p_createAdMoreLinkComponent;
- (BOOL)checkIsNativeMaskWith:(id)a0;
- (id)p_createAdOperationMaskView;
- (id)p_createAdCommentComponent;
- (id)p_createAdButtonComponent;
- (id)p_createAdKVAbstractComponent;
- (id)p_createAdNativeComponent:(id)a0;
- (id)getComponentErrorKey:(long long)a0;
- (void)removeAdComponentWithComponentType:(id)a0;
- (id)getDefaultComponentType;
- (void)hideAd;
- (void)checkDowndgradeWith:(id)a0 completion:(id /* block */)a1;
- (void)showAd;
- (void)viewDidAppear;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (void)viewWillAppear;
- (void)dealloc;
- (void)appDidEnterBackground;
- (void)viewDidDisappear;
- (void)appDidBecomeActive;
- (void)viewWillDisappear;
- (id)getErrorCount;

@end
