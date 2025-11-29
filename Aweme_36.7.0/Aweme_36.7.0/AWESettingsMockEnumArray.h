@class NSMutableArray;

@interface AWESettingsMockEnumArray : NSObject <NSFastEnumeration, NSCopying>

@property (retain, nonatomic) NSMutableArray *innerArray;

+ (id)boolArray;
+ (id)arrayWithArray:(id)a0;
+ (id)arrayWithObjects:(id)a0;

- (void)insertObjectAtFront:(id)a0;
- (unsigned long long)indexOfEnumData:(id)a0;
- (id)enumDataAtIndex:(unsigned long long)a0;
- (id)enumDescAtIndex:(unsigned long long)a0;
- (void)addObject:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (id)description;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)count;

@end
