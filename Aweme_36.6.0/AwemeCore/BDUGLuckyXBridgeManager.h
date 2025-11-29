@class NSString;

@interface BDUGLuckyXBridgeManager : NSObject <BDUGLuckyXBridgeInnerProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)registerLuckyCatXBridgeForGlobal;
+ (void)registerLuckyCatXBridgeForGlobalWithFilter:(id /* block */)a0;
+ (void)registerLuckyCatXBridgeForContainer:(id)a0;
+ (void)registerLuckyCatXBridgeForContainer:(id)a0 filter:(id /* block */)a1;
+ (id)luckyCatXBridgeMethodArray;
+ (id)luckyCatXBridgeMethodArrayWithFilter:(id /* block */)a0;
+ (id)serviceProtocol;


@end
