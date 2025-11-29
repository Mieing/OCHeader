@class NSMutableDictionary;

@interface UTHitBuilder : NSObject {
    NSMutableDictionary *mLogFileds;
}

- (void)setProperty:(id)a0 value:(id)a1;
- (void)setProperties:(id)a0;
- (void).cxx_destruct;
- (id)build;
- (id)init;
- (id)transform;

@end
