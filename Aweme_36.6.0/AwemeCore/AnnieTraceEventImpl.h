@class NSString;

@interface AnnieTraceEventImpl : NSObject <AnnieTraceEventProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)loadSwizzled;
+ (id)provideAnnieTraceEventProtocol:(id)a0;
+ (id)sharedInstance;

- (void)traceInstantWithName:(id)a0;
- (void)traceBeginSectionWithName:(id)a0 debugInfo:(id)a1;
- (void)traceEndSectionWithName:(id)a0;

@end
