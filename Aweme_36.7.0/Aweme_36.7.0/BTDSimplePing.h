@class NSData, NSString, NSDate;
@protocol BTDSimplePingDelegate;

@interface BTDSimplePing : NSObject

@property (copy, nonatomic) NSData *hostAddress;
@property (copy, nonatomic) NSString *IPAddress;
@property (nonatomic) unsigned short nextSequenceNumber;
@property (nonatomic) BOOL nextSequenceNumberHasWrapped;
@property (retain, nonatomic) struct __CFHost { } *host;
@property (retain, nonatomic) struct __CFSocket { } *socket;
@property (retain, nonatomic) NSDate *pingStartDate;
@property (readonly, copy, nonatomic) NSString *hostName;
@property (weak, nonatomic) id<BTDSimplePingDelegate> delegate;
@property (nonatomic) long long addressStyle;
@property (readonly, nonatomic) long long packetLength;
@property (readonly, nonatomic) unsigned char hostAddressFamily;
@property (readonly, nonatomic) unsigned short identifier;

+ (unsigned long long)icmpHeaderOffsetInIPv4Packet:(id)a0 timeToLive:(long long *)a1;

- (id)packetWithPingData:(id)a0;
- (void)sendPacket:(id)a0;
- (BOOL)validatePing4ResponsePacket:(id)a0 sequenceNumber:(unsigned short *)a1 timeToLive:(long long *)a2;
- (BOOL)validatePingResponsePacket:(id)a0 sequenceNumber:(unsigned short *)a1 timeToLive:(long long *)a2;
- (void)readData;
- (void).cxx_destruct;
- (void)stop;
- (void)stopHostResolution;
- (void)stopSocket;
- (BOOL)validateSequenceNumber:(unsigned short)a0;
- (void)hostResolutionDone;
- (void)startWithHostAddress;
- (id)initWithHostName:(id)a0;
- (void)start;
- (id)pingPacketWithType:(unsigned char)a0 payload:(id)a1 requiresChecksum:(BOOL)a2;
- (BOOL)validatePing6ResponsePacket:(id)a0 sequenceNumber:(unsigned short *)a1;
- (void)didFailWithHostStreamError:(struct { long long x0; int x1; })a0;
- (void)dealloc;
- (void)didFailWithError:(id)a0;

@end
