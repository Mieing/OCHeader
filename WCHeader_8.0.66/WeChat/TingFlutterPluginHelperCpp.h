@class NSString;

@interface TingFlutterPluginHelperCpp : UnitRCObjcBaseProxyClass <TingFlutterPluginHelper>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)setInstance:(id)a0;
+ (id)getInstance;

- (void)setPluginAttached:(BOOL)a0;
- (BOOL)getPluginAttached;
- (void)waitForPluginAttached:(long long)a0 callback:(id /* block */)a1;

@end
