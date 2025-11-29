@class NSString, NSMutableDictionary;

@interface AWEHPSideBarControllerFactory : NSObject <AWEHPListKitControllerFactoryProtocol>

@property (retain, nonatomic) NSMutableDictionary *itemControllerConfig;
@property (retain, nonatomic) NSMutableDictionary *moduleControllerConfig;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (BOOL)hasSupportModuleType:(id)a0;
- (id)createModuleControllerWithModel:(id)a0 withItemControllers:(id)a1 withManager:(id)a2 withContext:(id)a3;
- (id)createItemControllerWithBusinessType:(id)a0 withContext:(id)a1 extraData:(id)a2;
- (BOOL)hasSupportItemType:(id)a0;
- (void)registerModuleController;
- (void)registerItemController;
- (void)registerItemControllerWithConfig:(id)a0;
- (void)registerModuleControllerWithConfig:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)setup;

@end
