@interface VOIPComponent : NSObject

@property (nonatomic) struct VOIPChannelAdapter { void /* function */ **x0; } *mChannelAdapter;
@property (nonatomic) struct VOIPNetNotifier { void /* function */ **x0; } *mNetNotifier;
@property (nonatomic) struct ITransportChannel { void /* function */ **x0; } *mTransChannel;
@property (nonatomic) struct IMVQQEngine { void /* function */ **x0; } *mMVEngine;
@property (nonatomic) int mEngineChid;
@property (nonatomic) struct VoipCSChannelAdapter { void /* function */ **x0; } *mCSChannelAdapter;
@property (nonatomic) struct VOIPCSNetNotifier { void /* function */ **x0; } *mCSNetNotifier;

- (id)init;
- (id)initForCustomerService;
- (void)dealloc;

@end
