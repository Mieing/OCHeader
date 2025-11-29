@class NSString;

@interface KindaPlatformUIRouter : NSObject <MMKPlatformUIRouter>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)gotoExternApp:(id)a0 errcode:(int)a1 returnKey:(id)a2 universalLink:(id)a3 contextID:(id)a4 needToken:(int)a5 needShowPage:(int)a6 openApiParam:(id)a7;
- (void)jointpayGotoExternApp:(id)a0 errcode:(int)a1 returnKey:(id)a2 universalLink:(id)a3 contextID:(id)a4 needToken:(int)a5 needShowPage:(int)a6 openApiParam:(id)a7;
- (void)openUrlScheme:(id)a0;
- (void)openUrlSchemeWithCallbackImpl:(id)a0 callback:(id)a1;

@end
