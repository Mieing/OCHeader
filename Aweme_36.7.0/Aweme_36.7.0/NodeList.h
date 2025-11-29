@class NSMutableArray;

@interface NodeList : NSObject <NSFastEnumeration>

@property (retain, nonatomic) NSMutableArray *internalArray;
@property (readonly) unsigned long long length;

- (void).cxx_destruct;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (id)description;
- (id)init;
- (id)item:(unsigned long long)a0;

@end
