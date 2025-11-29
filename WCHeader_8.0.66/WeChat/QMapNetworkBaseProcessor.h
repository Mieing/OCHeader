@class NSMutableDictionary;

@interface QMapNetworkBaseProcessor : NSObject

@property (retain, nonatomic) NSMutableDictionary *rules;

- (id)init;
- (void)registerReportEvent:(id)a0;
- (void)onRequest:(id)a0;
- (void)onResponse:(id)a0 error:(id)a1 request:(id)a2 data:(id)a3;
- (void).cxx_destruct;

@end
