@class ZXIntArray, ZXGenericGF;

@interface ZXGenericGFPoly : NSObject

@property (readonly, nonatomic) ZXGenericGF *field;
@property (readonly, nonatomic) ZXIntArray *coefficients;

- (int)coefficient:(int)a0;
- (id)addOrSubtract:(id)a0;
- (int)evaluateAt:(int)a0;
- (id)multiplyScalar:(int)a0;
- (id)initWithField:(id)a0 coefficients:(id)a1;
- (id)multiplyByMonomial:(int)a0 coefficient:(int)a1;
- (id)divide:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (BOOL)zero;
- (id)multiply:(id)a0;
- (int)degree;

@end
