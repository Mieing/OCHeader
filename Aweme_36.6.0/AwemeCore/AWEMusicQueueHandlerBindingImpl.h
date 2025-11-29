@class NSString;

@interface AWEMusicQueueHandlerBindingImpl : HTSService <AWEMusicStreamingQueueHandlerBindingService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)bindMusicQueue:(id)a0 withQueueHandler:(id)a1;


@end
