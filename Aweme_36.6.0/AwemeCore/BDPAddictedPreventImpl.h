@class NSString;

@interface BDPAddictedPreventImpl : NSObject <BDPAddictedPreventInterface>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)bootstrapLoad;

- (id)initService;
- (void)eventMpLaunchResultWithLoginResult:(unsigned long long)a0 UniqueId:(id)a1;

@end
