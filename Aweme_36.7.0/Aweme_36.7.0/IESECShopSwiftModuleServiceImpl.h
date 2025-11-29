@class NSString;

@interface IESECShopSwiftModuleServiceImpl : NSObject <IESECShopSwiftModuleService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)createHybridPageVCWithRouterQuery:(id)a0;
+ (id)createShopSearchResultViewController:(id)a0;
+ (Class)getHybridPageVCClass;
+ (id)createHybridPageVCWithSchema:(id)a0;


@end
