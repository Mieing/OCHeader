@class RACReplaySubject;

@interface RACSignalSequence : RACSequence

@property (readonly, nonatomic) RACReplaySubject *subject;

+ (id)sequenceWithSignal:(id)a0;

- (id)tail;
- (id)head;
- (void).cxx_destruct;
- (id)description;
- (id)array;

@end
