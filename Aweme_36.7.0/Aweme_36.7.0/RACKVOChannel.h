@class NSString, RACKVOChannelData, NSObject;

@interface RACKVOChannel : RACChannel

@property (weak) NSObject *target;
@property (readonly, copy, nonatomic) NSString *keyPath;
@property (readonly, nonatomic) RACKVOChannelData *currentThreadData;

- (void)destroyCurrentThreadData;
- (void)createCurrentThreadData;
- (id)initWithTarget:(id)a0 keyPath:(id)a1 nilValue:(id)a2;
- (void).cxx_destruct;
- (id)objectForKeyedSubscript:(id)a0;
- (void)setObject:(id)a0 forKeyedSubscript:(id)a1;

@end
