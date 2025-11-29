@class NSString, BDByteCastSimplePing, NSDate;

@interface BDByteCastPingManager : NSObject <BDByteCastSimplePingDelegate>

@property (retain, nonatomic) BDByteCastSimplePing *pinger;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (retain, nonatomic) NSDate *startTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithContextId:(id)a0;
- (void)ping:(id)a0 completionHandler:(id /* block */)a1;
- (void)onPingTimeout;
- (void).cxx_destruct;
- (void)simplePing:(id)a0 didReceivePingResponsePacket:(id)a1 sequenceNumber:(unsigned short)a2;
- (void)simplePing:(id)a0 didFailWithError:(id)a1;
- (void)simplePing:(id)a0 didStartWithAddress:(id)a1;

@end
