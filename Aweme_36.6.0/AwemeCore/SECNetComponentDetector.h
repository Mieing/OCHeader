@class NSArray;

@interface SECNetComponentDetector : NSObject {
    NSArray *_rules;
    unsigned long long _netPart;
}

- (id)handle:(id)a0 withTraffic:(id)a1;
- (id)handle:(id)a0 withTraffic:(id)a1 config:(id)a2;
- (id)initWithRules:(id)a0 withPart:(unsigned long long)a1;
- (id)detectTraffic:(id)a0;
- (void).cxx_destruct;

@end
