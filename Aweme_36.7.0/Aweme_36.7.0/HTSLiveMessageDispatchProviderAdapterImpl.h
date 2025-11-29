@class NSString;

@interface HTSLiveMessageDispatchProviderAdapterImpl : IESLiveBaseAdapter <HTSLiveMessageDispatchProviderAdapter>

@property (nonatomic) double messageClientStartConnectTimeStamp;
@property (nonatomic) double messageClientDispatchFirstMessageTimeStamp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)dispatcher;

@end
