@class NSArray;

@interface __RxIDArray : NSMutableArray

@property (readonly, nonatomic) NSArray *values;

+ (id)arrayWithIDs:(id)a0;

- (id)getInKeys;
- (id)copy;
- (void).cxx_destruct;
- (id)objectAtIndex:(unsigned long long)a0;
- (id)mutableCopy;
- (unsigned long long)count;
- (id)ids;

@end
