@class RACSequence;

@interface RACSequenceEnumerator : NSEnumerator

@property (retain, nonatomic) RACSequence *sequence;

- (void).cxx_destruct;
- (id)nextObject;

@end
