@class QMapNetworkStatProcessor;

@interface QMapNetworkProcessorQueue : NSObject

@property (retain, nonatomic) QMapNetworkStatProcessor *processor;

- (id)init;
- (void)registerRules:(id)a0;
- (void)unregisterRules:(id)a0;
- (void)onRequest:(id)a0;
- (void)onResponse:(id)a0 error:(id)a1 request:(id)a2 data:(id)a3;
- (void).cxx_destruct;

@end
