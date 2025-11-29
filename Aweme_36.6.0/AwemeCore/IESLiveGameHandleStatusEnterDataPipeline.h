@class NSDictionary, NSString;
@protocol IESLiveGameHandleStatusEnterDataPipelineDelegate;

@interface IESLiveGameHandleStatusEnterDataPipeline : NSObject <IESLivePipelineDelegate>

@property (readonly, nonatomic) NSDictionary *cacheSEI;
@property (readonly, nonatomic) unsigned long long aaiGameContainerViewType;
@property (copy, nonatomic) id /* block */ throwPacketBlock;
@property (nonatomic) BOOL isNeedHandleAllKey;
@property (weak, nonatomic) id<IESLiveGameHandleStatusEnterDataPipelineDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)receivePacket:(id)a0 throwPacketBlock:(id /* block */)a1;
- (void)handleAllKeyWithPacket:(id)a0 block:(id /* block */)a1;
- (void)handleEnterRoomWithPacket:(id)a0 throwPacketBlock:(id /* block */)a1;
- (BOOL)_isGameOpenPlatformEnterRoomPacket:(id)a0;
- (void)_openPlatformGame_handleEnterRoomWithPacket:(id)a0 throwPacketBlock:(id /* block */)a1;
- (void)_handleEnterRoomWithPacket:(id)a0 throwPacketBlock:(id /* block */)a1;
- (BOOL)hasChannel2WithDict:(id)a0;
- (void)handleGameStart:(id)a0 packet:(id)a1 hasChannel2:(BOOL)a2 throwPacketBlock:(id /* block */)a3;
- (id)_addCacheMessageFlagForMessage:(id)a0;
- (void).cxx_destruct;

@end
