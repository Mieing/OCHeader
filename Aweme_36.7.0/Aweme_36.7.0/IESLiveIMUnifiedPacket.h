@class NSArray;

@interface IESLiveIMUnifiedPacket : IESLiveIMTransportPacket

@property (retain, nonatomic) NSArray *businessDataArray;
@property (retain, nonatomic) NSArray *responsePacketArray;

- (void).cxx_destruct;

@end
