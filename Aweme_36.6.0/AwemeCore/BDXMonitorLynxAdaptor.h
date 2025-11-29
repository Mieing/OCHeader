@class NSString;

@interface BDXMonitorLynxAdaptor : NSObject <BDXMonitorKitViewAdaptor>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)startHook;
- (void)traceBeginWithName:(id)a0;
- (void)traceEndWithName:(id)a0;
- (void)traceInstantWithName:(id)a0;
- (void)attachVirtualAid:(id)a0 view:(id)a1;
- (BOOL)matchWithView:(id)a0;
- (id)getUrlWithView:(id)a0;
- (id)getMonitorWithView:(id)a0;
- (id)fetchUnifyErrorDetailWithMonitorSessionId:(id)a0;
- (long long)platform;

@end
