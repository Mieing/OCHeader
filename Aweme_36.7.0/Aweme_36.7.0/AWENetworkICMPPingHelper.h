@class NSString, NSMutableArray, AWENetworkICMPPingFoundation;

@interface AWENetworkICMPPingHelper : NSObject <AWENetworkICMPPingFoundationDelegate>

@property (retain, nonatomic) NSMutableArray *completionBlocks;
@property (retain, nonatomic) AWENetworkICMPPingFoundation *pingFoundation;
@property (nonatomic) BOOL isPinging;
@property (nonatomic) double pingStartTime;
@property (copy, nonatomic) NSString *host;
@property (copy, nonatomic) NSString *hostForCheck;
@property (nonatomic) double timeout;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)pingWithBlock:(id /* block */)a0;
- (void)pingFoundation:(id)a0 didFailWithError:(id)a1;
- (void)pingFoundation:(id)a0 didFailToSendPacket:(id)a1 sequenceNumber:(unsigned short)a2 error:(id)a3;
- (void)pingFoundation:(id)a0 didReceivePingResponsePacket:(id)a1 sequenceNumber:(unsigned short)a2;
- (void)pingFoundation:(id)a0 didStartWithAddress:(id)a1;
- (void)clearPingFoundation;
- (void)pingTimeOut;
- (void)endWithFlag:(BOOL)a0;
- (void)doubleCheck;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)startPing;

@end
