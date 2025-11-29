@class NSMutableSet, NSMutableDictionary, NSRecursiveLock;

@interface LynxServices : NSObject

@property (retain) NSMutableDictionary *protocolToClassMap;
@property (retain) NSMutableDictionary *protocolToInstanceMap;
@property (retain) NSRecursiveLock *recLock;
@property (retain) NSMutableSet *protocolClassCalledSet;

+ (void)lynxLazyLoad;
+ (void)bindClass:(Class)a0 toProtocol:(id)a1;
+ (id)getInstanceWithProtocol:(id)a0 bizID:(id)a1;
+ (id)__lynx_auto_register_serivce__LynxAsyncService450;
+ (id)__lynx_auto_register_serivce__LynxServiceCanvasImpl330;
+ (id)getProtocolByServiceType:(unsigned long long)a0;
+ (id)getProtocolByServiceType:(unsigned long long)a0;
+ (id)__lynx_auto_register_serivce__LynxEventReporterService160;
+ (id)__lynx_auto_register_serivce__LynxExtensionService150;
+ (id)__lynx_auto_register_serivce__LynxHttpService790;
+ (id)__lynx_auto_register_serivce__LynxImageService320;
+ (id)__lynx_auto_register_serivce__LynxLogService230;
+ (id)__lynx_auto_register_serivce__LynxModuleService90;
+ (id)__lynx_auto_register_serivce__LynxMonitorService190;
+ (id)__lynx_auto_register_serivce__LynxResourceService120;
+ (id)__lynx_auto_register_serivce__LynxSecurityService240;
+ (id)__lynx_auto_register_serivce__LynxServiceInitializer130;
+ (id)__lynx_auto_register_serivce__LynxTrailService220;
+ (id)__lynx_auto_register_serivce__LynxVideoService80;
+ (id)sharedInstance;
+ (void)registerService:(Class)a0;

- (void)bindClass:(Class)a0 toProtocol:(id)a1;
- (id)getInstanceWithProtocol:(id)a0 bizID:(id)a1;
- (id)getInstanceWithClass:(Class)a0;
- (void).cxx_destruct;
- (id)init;

@end
