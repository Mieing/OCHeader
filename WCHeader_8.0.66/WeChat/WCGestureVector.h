@class NSMutableArray;

@interface WCGestureVector : MMObject

@property (retain, nonatomic) NSMutableArray *doubleValueArray;

+ (id)vector;

- (void)clear;
- (long long)getGSVectorSize;
- (void)addDouble:(double)a0;
- (double)doubleAtIndex:(long long)a0;
- (void)setDouble:(double)a0 atIndex:(long long)a1;
- (void).cxx_destruct;

@end
