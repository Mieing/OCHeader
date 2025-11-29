@class NSMutableDictionary;

@interface DFEStageCache : NSObject {
    NSMutableDictionary *dict;
    unsigned long long completed;
}

@property (copy, nonatomic) id /* block */ flushBlock;
@property (nonatomic) unsigned long long maxNumberOfEvents;

- (void)flushOnce:(id)a0;
- (void)recordEvent:(id)a0 stage:(id)a1;
- (void)flush;
- (void).cxx_destruct;
- (id)init;
- (unsigned long long)count;

@end
