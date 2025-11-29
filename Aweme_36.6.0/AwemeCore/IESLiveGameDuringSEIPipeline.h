@class NSString;

@interface IESLiveGameDuringSEIPipeline : NSObject <IESLivePipelineDelegate>

@property (nonatomic) BOOL isStopObserveSEI;
@property (copy, nonatomic) id /* block */ updateGameStatusBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)receivePacket:(id)a0 throwPacketBlock:(id /* block */)a1;
- (void)updateGameStatus:(unsigned long long)a0;
- (void).cxx_destruct;

@end
