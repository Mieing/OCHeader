@class IESLiveLinkInteractStreamingClientImp_Douyin, NSString, HTSLiveRealPushStreamImp_Douyin;

@interface HTSLivePushStreamLifeCycleImp_Douyin : NSObject <IESLivePushStreamLifeCycle>

@property (retain, nonatomic) HTSLiveRealPushStreamImp_Douyin *streamProvider;
@property (retain, nonatomic) IESLiveLinkInteractStreamingClientImp_Douyin *interactStreamingClient;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)attachingDIContext;
- (void)loadPushStreamProviderWith:(unsigned long long)a0 entryConfig:(id)a1;
- (void)cleanupPushStreamProvider;
- (void)loadInteractStreamingClientIfNeeded;
- (void)loadRealPushStreamProviderWithContentType:(unsigned long long)a0 entryConfig:(id)a1;
- (void).cxx_destruct;

@end
