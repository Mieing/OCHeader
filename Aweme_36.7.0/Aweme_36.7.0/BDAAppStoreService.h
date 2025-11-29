@class NSString;

@interface BDAAppStoreService : NSObject <BDASDKProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)protocolImp;
+ (id)sharedInstance;

- (void)performanceEventV3:(id)a0 params:(id)a1;
- (void)eventData:(id)a0;
- (void)eventV3:(id)a0 params:(id)a1 isDoubleSending:(BOOL)a2;
- (void)monitorService:(id)a0 value:(id)a1 extra:(id)a2;
- (void)bdxPublishEventWithEventName:(id)a0 params:(id)a1;
- (id)ntType;
- (void)hmdTrackService:(id)a0 params:(id)a1;
- (id)init;

@end
