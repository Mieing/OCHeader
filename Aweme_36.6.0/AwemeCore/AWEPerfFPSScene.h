@class NSDictionary;

@interface AWEPerfFPSScene : AWEPerfFPSRecord {
    NSDictionary *_extra;
    double _minimumDuration;
    id /* block */ _customLogHandler;
}

- (void).cxx_destruct;
- (id)initWithKey:(id)a0;

@end
