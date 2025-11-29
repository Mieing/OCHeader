@class NSString;

@interface TMNetworkHttpSampleRequestSubscriber : NSObject <TMNetworkSubscriberProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned long long)subscriberModifyType;
+ (unsigned long long)subscriberExecuteType;
+ (id)subscribeAspects;
+ (id)handleEventWithContext:(id)a0;
+ (void)start;
+ (id)identifier;
+ (BOOL)hasStart;
+ (unsigned long long)subscriberType;


@end
