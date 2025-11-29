@class NSString, NSMutableDictionary, NSSet;

@interface BDByteCastPingProber : NSObject <BDByteCastProberProtocol>

@property (retain, nonatomic) NSMutableDictionary *foundHosts;
@property (copy, nonatomic) NSString *currentHostAddress;
@property (copy, nonatomic) NSSet *blackIpsSet;
@property (nonatomic) long long probeTimes;
@property (copy, nonatomic) id /* block */ onProbeResult;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithContextId:(id)a0;
- (void)startProbe;
- (void)addHostsFrom:(id)a0 tag:(id)a1;
- (void)onProbeCompleted;
- (void).cxx_destruct;

@end
