@class NSMutableDictionary, NSRecursiveLock;

@interface LynxServices : NSObject

@property (retain) NSMutableDictionary *protocolToClassMap;
@property (retain) NSMutableDictionary *protocolToInstanceMap;
@property (retain) NSRecursiveLock *recLock;

+ (void)lynxLazyLoad;
+ (void)bindClass:(Class)a0 toProtocol:(id)a1;
+ (id)getInstanceWithProtocol:(id)a0;
+ (struct { Class x0; id x1; } *)__lynx_auto_register_service__LynxAsyncService440;
+ (struct { Class x0; id x1; } *)__lynx_auto_register_service__LynxBaseTraceService310;
+ (struct { Class x0; id x1; } *)__lynx_auto_register_service__LynxServiceCanvasImpl320;
+ (struct { Class x0; id x1; } *)__lynx_auto_register_service__LynxEventReporterService160;
+ (struct { Class x0; id x1; } *)__lynx_auto_register_service__LynxExtensionService150;
+ (struct { Class x0; id x1; } *)__lynx_auto_register_service__LynxHttpService790;
+ (struct { Class x0; id x1; } *)__lynx_auto_register_service__LynxImageService320;
+ (struct { Class x0; id x1; } *)__lynx_auto_register_service__LynxLogService230;
+ (struct { Class x0; id x1; } *)__lynx_auto_register_service__LynxModuleService90;
+ (struct { Class x0; id x1; } *)__lynx_auto_register_service__LynxMonitorService190;
+ (struct { Class x0; id x1; } *)__lynx_auto_register_service__LynxResourceService110;
+ (struct { Class x0; id x1; } *)__lynx_auto_register_service__LynxSecurityService240;
+ (struct { Class x0; id x1; } *)__lynx_auto_register_service__LynxServiceInitializer120;
+ (struct { Class x0; id x1; } *)__lynx_auto_register_service__LynxTrailService220;
+ (struct { Class x0; id x1; } *)__lynx_auto_register_service__LynxVideoService70;
+ (void)registerServiceWithProtocol:(Class)a0 protocol:(id)a1;
+ (id)sharedInstance;

- (void)bindClass:(Class)a0 toProtocol:(id)a1;
- (id)getInstanceWithProtocol:(id)a0;
- (id)getInstanceWithClass:(Class)a0;
- (void).cxx_destruct;
- (id)init;

@end
