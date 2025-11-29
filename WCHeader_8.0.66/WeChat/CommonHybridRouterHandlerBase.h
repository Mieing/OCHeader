@class NSString;

@interface CommonHybridRouterHandlerBase : UnitRCObjcBaseClass <CommonHybridRouterHandler>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)notifyPageCreated:(id)a0 params:(id)a1;

- (id)getPlatformKey;
- (void)handleOpen:(id)a0 callback:(id /* block */)a1;
- (void)handleOpen:(id)a0 customArgs:(id)a1 callback:(id /* block */)a2;

@end
