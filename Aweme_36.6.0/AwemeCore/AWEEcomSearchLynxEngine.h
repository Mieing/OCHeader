@class AWEEcomSearchViewModel, NSString, NSDictionary, UIView, NSObject, AWEDynamicPatchModel;
@protocol BDXContainerLifeCycleProtocol, AWEEcomSearchLynxEngineDelegate, BDXViewContainerProtocol;

@interface AWEEcomSearchLynxEngine : NSObject <BDXContainerLifecycleProtocol, AWEEcomSearchLynxEngineProtocol>

@property (retain, nonatomic) UIView<BDXViewContainerProtocol> *bdxView;
@property (retain, nonatomic) NSObject<BDXContainerLifeCycleProtocol> *bulletLifeCycleClient;
@property (weak, nonatomic) id<AWEEcomSearchLynxEngineDelegate> delegate;
@property (retain, nonatomic) AWEEcomSearchViewModel *searchViewModel;
@property (retain, nonatomic) AWEDynamicPatchModel *model;
@property (copy, nonatomic) NSDictionary *initialData;
@property (copy, nonatomic) NSDictionary *contentParams;
@property (readonly, copy, nonatomic) NSString *containerID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)monitor:(id)a0 params:(id)a1 dynamicPatch:(id)a2;
+ (id)lynxInitialDataWithModel:(id)a0;
+ (id)globalPropsForModel:(id)a0 searchScene:(id)a1;
+ (BOOL)checkForceSetThemeToLynx:(id)a0;
+ (id)lynxThemeTextWithUIInfo:(id)a0;
+ (id)lynxThemeTextWithThemeStyle:(unsigned long long)a0;

- (void)container:(id)a0 didLoadFailedWithUrl:(id)a1 error:(id)a2;
- (void)containerDidFirstScreen:(id)a0;
- (void)container:(id)a0 didRecieveError:(id)a1;
- (void)sendEvent:(id)a0 params:(id)a1;
- (void)registerXBridgeMethod:(id)a0;
- (void)updateData:(id)a0 processorName:(id)a1;
- (id)processedSchema;
- (id)initWithModel:(id)a0 withSearchViewModel:(id)a1;
- (id)bdxViewWithModel:(id)a0;
- (id)bdxContextWithModel:(id)a0;
- (id)bdxViewWithContext:(id)a0;
- (void)setAdInfoWithLynxView:(id)a0;
- (void)registerBridgeHandlerWithBlock:(id /* block */)a0;
- (id)initWithModel:(id)a0;
- (void).cxx_destruct;
- (void)updateWithModel:(id)a0;

@end
