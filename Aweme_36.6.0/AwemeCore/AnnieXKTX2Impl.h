@class NSString;

@interface AnnieXKTX2Impl : NSObject <AnnieXKTX2TranscoderProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned long long)serviceScope;
+ (id)serviceBizID;
+ (unsigned long long)serviceType;

- (void)registerKryptonService:(id)a0;
- (void)unregisterKryptonService;

@end
