@class NSString;

@interface HMDMonitorService : NSObject <HMDMonitorServiceProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)trackService:(id)a0 metrics:(id)a1 dimension:(id)a2 extra:(id)a3 syncWrite:(BOOL)a4;
+ (void)trackService:(id)a0 metrics:(id)a1 dimension:(id)a2 extra:(id)a3;
+ (Class)service;


@end
