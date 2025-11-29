@class AWECloudCommandNetDiagnoseSimplePing, NSString;
@protocol AWECloudCommandNetDiagnoseConnectDelegate;

@interface AWECloudCommandNetDiagnoseConnect : NSObject <AWECloudCommandSimplePingDelegate>

@property (retain, nonatomic) AWECloudCommandNetDiagnoseSimplePing *pinger;
@property (nonatomic) long long currentLoop;
@property (nonatomic) long long maxLoop;
@property (copy, nonatomic) NSString *address;
@property (nonatomic) double startTS;
@property (weak, nonatomic) id<AWECloudCommandNetDiagnoseConnectDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_displayAddressForAddress:(id)a0;
+ (id)_failLogForError:(id)a0;

- (void)_timeourtFired;
- (void)_pingCallbackWithLog:(id)a0;
- (void)_sendPing;
- (void)startPingWithHost:(id)a0 maxLoop:(long long)a1;
- (void).cxx_destruct;
- (void)simplePing:(id)a0 didReceiveUnexpectedPacket:(id)a1;
- (void)simplePing:(id)a0 didSendPacket:(id)a1 sequenceNumber:(unsigned short)a2;
- (void)stop;
- (void)simplePing:(id)a0 didFailToSendPacket:(id)a1 sequenceNumber:(unsigned short)a2 error:(id)a3;
- (void)simplePing:(id)a0 didReceivePingResponsePacket:(id)a1 sequenceNumber:(unsigned short)a2;
- (void)simplePing:(id)a0 didFailWithError:(id)a1;
- (void)simplePing:(id)a0 didStartWithAddress:(id)a1;

@end
