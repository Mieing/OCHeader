@interface QMapNetworkStatProcessor : QMapNetworkBaseProcessor

- (void)onRequest:(id)a0;
- (void)onResponse:(id)a0 error:(id)a1 request:(id)a2 data:(id)a3;
- (id)checkMatchEventId:(id)a0;
- (void)onReport:(id)a0;
- (id)constructRuleKey:(id)a0;

@end
