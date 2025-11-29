@class NSString;

@interface RACStringSequence : RACSequence

@property (readonly, copy, nonatomic) NSString *string;
@property (readonly, nonatomic) unsigned long long offset;

+ (id)sequenceWithString:(id)a0 offset:(unsigned long long)a1;

- (id)tail;
- (id)head;
- (void).cxx_destruct;
- (id)description;
- (id)array;

@end
