@class NSString;

@interface BDPUnisusSlardarManager : NSObject <UnisusSlardarServiceProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedPlugin;

- (void)monitorEventName:(id)a0 metric:(id)a1 category:(id)a2 extra:(id)a3;

@end
