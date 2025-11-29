@class NSString, BTDSimplePing, NSMutableArray;

@interface BTDPingServices : NSObject <BTDSimplePingDelegate> {
    BOOL _hasStarted;
    BOOL _isTimeout;
    long long _repingTimes;
    long long _sequenceNumber;
    NSMutableArray *_pingItems;
}

@property (copy, nonatomic) NSString *address;
@property (retain, nonatomic) BTDSimplePing *simplePing;
@property (nonatomic) long long maximumPingTimes;
@property (copy, nonatomic) id /* block */ callbackHandler;
@property (copy, nonatomic) id /* block */ finishHandler;
@property (nonatomic) double timeoutMilliseconds;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)startPingAddress:(id)a0 callbackHandler:(id /* block */)a1;
+ (id)startPingAddress:(id)a0 maximumPingTimes:(long long)a1 callbackHandler:(id /* block */)a2;
+ (id)startPingAddress:(id)a0 maximumPingTimes:(long long)a1 callbackHandler:(id /* block */)a2 finishHandler:(id /* block */)a3;

- (void)_handlePingItem:(id)a0;
- (void)reping;
- (void)_timeoutActionFired;
- (void)st_simplePing:(id)a0 didStartWithAddress:(id)a1;
- (void)st_simplePing:(id)a0 didFailWithError:(id)a1;
- (void)st_simplePing:(id)a0 didSendPacket:(id)a1 sequenceNumber:(unsigned short)a2;
- (void)st_simplePing:(id)a0 didFailToSendPacket:(id)a1 sequenceNumber:(unsigned short)a2 error:(id)a3;
- (void)st_simplePing:(id)a0 didReceivePingResponsePacket:(id)a1 timeToLive:(long long)a2 sequenceNumber:(unsigned short)a3 timeElapsed:(double)a4;
- (void)st_simplePing:(id)a0 didReceiveUnexpectedPacket:(id)a1;
- (void).cxx_destruct;
- (id)initWithAddress:(id)a0;
- (void)cancel;
- (void)startPing;

@end
