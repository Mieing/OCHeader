@class NSMutableArray, WCGestureVector;

@interface WCGestureSet : MMObject

@property (retain, nonatomic) WCGestureVector *vector;
@property (retain, nonatomic) NSMutableArray *pointArray;
@property (readonly, nonatomic) BOOL isStandardized;

+ (id)gestureSetWithPoints:(id)a0;
+ (id)gestureSet;

- (id)init;
- (void)addGesturePoint:(id)a0;
- (void)removeAllGesturePoints;
- (long long)countPoints;
- (id)pointAtIndex:(long long)a0;
- (void)setPoint:(id)a0 atIndex:(long long)a1;
- (id)getPoints;
- (id)getVector;
- (void).cxx_destruct;

@end
