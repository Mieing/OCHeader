@class NSString;

@interface SECNativeNetRequestSubscriber : NSObject <TMNetworkSubscriberProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)protectContext:(id)a0 withEvent:(id)a1;
+ (id)actionResultForAction:(id)a0;
+ (id)translateToTMActionResults:(id)a0;
+ (unsigned long long)subscriberModifyType;
+ (unsigned long long)subscriberExecuteType;
+ (id)subscribeAspects;
+ (id)handleEventWithContext:(id)a0;
+ (void)setSubscribeTTNetReq:(BOOL)a0;
+ (void)start;
+ (id)identifier;
+ (BOOL)hasStart;
+ (unsigned long long)subscriberType;


@end
