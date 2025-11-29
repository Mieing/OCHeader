@class NSMutableDictionary;

@interface UTDLogBuilder : NSObject {
    NSMutableDictionary *logMap;
}

- (id)initWithAppMonitorUTEvent:(id)a0;
- (BOOL)checkProperty:(id)a0;
- (void).cxx_destruct;
- (id)build;
- (void)addEntriesFromDictionary:(id)a0;
- (void)setValue:(id)a0 forKey:(id)a1;

@end
