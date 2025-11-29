@class NSString;

@interface AWEFormatOSSignPostDebugServiceImpl : NSObject <AWEFormatOSSignPostDebugService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)initOSSignPostEnv;
- (void)startStringEvent:(const char *)a0;
- (void)endStringEvent:(const char *)a0;
- (id)init;
- (void)dealloc;
- (void)startEvent:(long long)a0;
- (void)endEvent:(long long)a0;

@end
