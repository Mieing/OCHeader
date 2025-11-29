@class NSString;

@interface IESLiveAAIThreadPipeline : NSObject <IESLivePipelineDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)receivePacket:(id)a0 throwPacketBlock:(id /* block */)a1;

@end
