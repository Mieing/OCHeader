@interface MMMemoryLayout : NSObject

@property (nonatomic) long long offset;
@property (nonatomic) long long type;
@property (retain, nonatomic) MMMemoryLayout *node;
@property (nonatomic) long long base;

- (id)initWithDictionary:(id)a0 base:(long long)a1;
- (void)resetBase:(long long)a0;
- (unsigned long long *)ptr;
- (unsigned long long)readST;
- (long long)value;
- (void).cxx_destruct;

@end
