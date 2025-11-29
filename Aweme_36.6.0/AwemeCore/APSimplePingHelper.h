@class ASSSimplePing, NSString;

@interface APSimplePingHelper : NSObject <ASSSimplePingDelegate>

@property (retain, nonatomic) ASSSimplePing *simplePing;
@property (retain, nonatomic) id target;
@property (nonatomic) SEL sel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)ping:(id)a0 target:(id)a1 sel:(SEL)a2;

- (id)initWithAddress:(id)a0 target:(id)a1 sel:(SEL)a2;
- (void)killPing;
- (void)successPing;
- (void)failPing:(id)a0;
- (void)simplePing:(id)a0 didFailToSendPacket:(id)a1 error:(id)a2;
- (void).cxx_destruct;
- (void)endTime;
- (void)simplePing:(id)a0 didReceivePingResponsePacket:(id)a1 sequenceNumber:(unsigned short)a2;
- (void)simplePing:(id)a0 didFailWithError:(id)a1;
- (void)simplePing:(id)a0 didStartWithAddress:(id)a1;
- (void)go;

@end
