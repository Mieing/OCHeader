@class NSArray;
@protocol AWEHPListKitControllerFactoryProtocol;

@interface AWEHPListKitControllerManager : NSObject

@property (copy, nonatomic) NSArray *moduleControllerArray;
@property (copy, nonatomic) NSArray *moduleModels;
@property (retain, nonatomic) id<AWEHPListKitControllerFactoryProtocol> factory;

- (BOOL)removeItemControllerWithBusinessId:(id)a0;
- (void)p_createModuleControllers:(id)a0 withModuleControllerArray:(id)a1 withModuleModels:(id)a2 withNeedReuse:(BOOL)a3 withModuleContextBlock:(id /* block */)a4 withItemContextBlock:(id /* block */)a5 withItemCreateCompleteBlock:(id /* block */)a6;
- (id)p_reuseItemController:(id)a0 withModuleType:(id)a1 withItemContextBlock:(id /* block */)a2;
- (id)p_createItemController:(id)a0 withModuleType:(id)a1 withItemContextBlock:(id /* block */)a2 withItemCreateCompleteBlock:(id /* block */)a3;
- (id)getItemControllerContextWithBusinessId:(id)a0;
- (void)loadDataAndCreateController:(id)a0;
- (void).cxx_destruct;
- (id)initWithFactory:(id)a0;

@end
