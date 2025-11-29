@class NSData, NSString;
@protocol BDByteCastSimplePingDelegate;

@interface BDByteCastSimplePing : NSObject

@property (copy, nonatomic) NSData *hostAddress;
@property (nonatomic) unsigned short nextSequenceNumber;
@property (nonatomic) BOOL nextSequenceNumberHasWrapped;
@property (retain, nonatomic) struct __CFHost { } *host;
@property (retain, nonatomic) struct __CFSocket { } *socket;
@property (readonly, copy, nonatomic) NSString *hostName;
@property (weak, nonatomic) id<BDByteCastSimplePingDelegate> delegate;
@property (nonatomic) long long addressStyle;
@property (readonly, nonatomic) unsigned char hostAddressFamily;
@property (readonly, nonatomic) unsigned short identifier;

+ (unsigned long long)icmpHeaderOffsetInIPv4Packet:(id)a0;

- (void)readData;
- (void).cxx_destruct;
- (void)stop;
- (void)stopHostResolution;
- (void)stopSocket;
- (BOOL)validateSequenceNumber:(unsigned short)a0;
- (void)hostResolutionDone;
- (void)startWithHostAddress;
- (BOOL)validatePingResponsePacket:(id)a0 sequenceNumber:(unsigned short *)a1;
- (BOOL)validatePing4ResponsePacket:(id)a0 sequenceNumber:(unsigned short *)a1;
- (id)initWithHostName:(id)a0;
- (void)start;
- (id)pingPacketWithType:(unsigned char)a0 payload:(id)a1 requiresChecksum:(BOOL)a2;
- (BOOL)validatePing6ResponsePacket:(id)a0 sequenceNumber:(unsigned short *)a1;
- (void)didFailWithHostStreamError:(struct { long long x0; int x1; })a0;
- (void)dealloc;
- (void)didFailWithError:(id)a0;
- (void)sendPingWithData:(id)a0;

@end
