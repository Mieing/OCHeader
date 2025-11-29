@class NSString;

@interface BDPPublishEventService : NSObject <BDPPublishEventService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)bootstrapLaunch;

- (id)initService;
- (void)bdp_publishPageEventWithAppID:(id)a0 param:(id)a1;

@end
