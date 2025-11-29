@class NSString, NSMutableDictionary;
@protocol IESECComponentManagerViewModel;

@interface IESECComponentManager : NSObject <IESECComponentManagerInternalDI>

@property (retain, nonatomic) NSMutableDictionary *componentsManagerDic;
@property (retain, nonatomic) NSMutableDictionary *diDic;
@property (retain, nonatomic) NSMutableDictionary *registeredComponentCreators;
@property (readonly, nonatomic) id<IESECComponentManagerViewModel> viewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateViewModel:(id)a0;
- (void)didPageVisibilityChange:(BOOL)a0;
- (void)parentPrepareForReuse;
- (id)allLoadedComponents;
- (void)registerLocalRegionName:(id)a0 componentLoadBlock:(id /* block */)a1 unloadBlock:(id /* block */)a2;
- (void)registerRouter:(id)a0 creator:(id /* block */)a1;
- (id)loadComponentWithRouter:(id)a0 data:(id)a1 localRegionName:(id)a2;
- (id)componentByClass:(Class)a0;
- (void)clearComponentsWithRegionName:(id)a0;
- (id)getComponentsForProtocol:(id)a0;
- (id)getComponentForProtocol:(id)a0;
- (void)clearComponentWithLocalRegionName:(id)a0 componentManagerItem:(id)a1 force:(BOOL)a2;
- (id)componentManagerItemForLocalRegionName:(id)a0;
- (id)loadComponentWithRouter:(id)a0 localRegionName:(id)a1 creator:(id /* block */)a2 updater:(id /* block */)a3;
- (BOOL)enableRetainComponentWhenUnloadComponent:(id)a0;
- (void)registerRouter:(id)a0 toClass:(Class)a1;
- (id)getComponentWithLocalRegionName:(id)a0;
- (void)clearLigoComponentsDic;
- (void).cxx_destruct;
- (id)initWithViewModel:(id)a0;
- (void)clearAll;

@end
