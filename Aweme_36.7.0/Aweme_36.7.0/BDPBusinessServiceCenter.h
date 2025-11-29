@class NSString;

@interface BDPBusinessServiceCenter : NSObject <BDPAllAppsDestructedMessage>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)bindProtocol:(id)a0 service:(Class)a1;
+ (void)unbindProtocol:(id)a0;
+ (Class)getServiceClassWithProtocol:(id)a0;
+ (id)getService:(id)a0 type:(long long)a1;
+ (void)bindProtocol:(id)a0 service:(Class)a1 type:(long long)a2;
+ (void)bindPreloadProtocol:(id)a0;
+ (void)allAppsHaveDestructed;
+ (id)connectBusinessProtocolName:(id)a0 type:(long long)a1;
+ (id)connectProtocolName:(id)a0;
+ (void)initialize;
+ (void)removeAllServices;
+ (id)getService:(id)a0;


@end
