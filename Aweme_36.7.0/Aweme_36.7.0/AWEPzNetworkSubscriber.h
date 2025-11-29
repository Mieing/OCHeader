@class NSString;
@protocol AWEHPNetCombineSubscriberAbility;

@interface AWEPzNetworkSubscriber : NSObject <AWEHPNetCombineSubscriberProtocol>

@property (nonatomic) double lastRequestTime;
@property (nonatomic) long long isRequestingCount;
@property (retain, nonatomic) id<AWEHPNetCombineSubscriberAbility> ability;
@property (nonatomic) long long sessionId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)setupAbility:(id)a0;
- (void)handleResponse:(id)a0 withRequest:(id)a1;
- (void)getRequestBody:(id)a0 callback:(id /* block */)a1;
- (BOOL)p_isDomainRegister:(id)a0;
- (id)p_checkConfigModel:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)handleRequest:(id)a0;

@end
