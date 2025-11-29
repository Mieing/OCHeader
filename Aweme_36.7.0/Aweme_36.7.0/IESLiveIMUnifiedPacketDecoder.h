@class NSString;
@protocol IESLiveIMDecoder;

@interface IESLiveIMUnifiedPacketDecoder : NSObject <IESLiveIMDecoder>

@property (retain, nonatomic) id<IESLiveIMDecoder> nextDecoder;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)decode:(id)a0 completion:(id /* block */)a1;
- (void)handleOutPacket:(id)a0 withDownlinkPacket:(id)a1;
- (void).cxx_destruct;

@end
