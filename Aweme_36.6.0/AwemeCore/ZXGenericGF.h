@class ZXGenericGFPoly;

@interface ZXGenericGF : NSObject

@property (readonly, nonatomic) int *expTable;
@property (readonly, nonatomic) int *logTable;
@property (readonly, nonatomic) int primitive;
@property (readonly, nonatomic) ZXGenericGFPoly *zero;
@property (readonly, nonatomic) ZXGenericGFPoly *one;
@property (readonly, nonatomic) int size;
@property (readonly, nonatomic) int generatorBase;

+ (id)DataMatrixField256;
+ (id)AztecData6;
+ (id)AztecData12;
+ (id)AztecData10;
+ (id)AztecParam;
+ (id)QrCodeField256;
+ (id)AztecData8;
+ (id)MaxiCodeField64;
+ (int)addOrSubtract:(int)a0 b:(int)a1;

- (id)initWithPrimitive:(int)a0 size:(int)a1 b:(int)a2;
- (id)buildMonomial:(int)a0 coefficient:(int)a1;
- (int)inverse:(int)a0;
- (int)multiply:(int)a0 b:(int)a1;
- (void).cxx_destruct;
- (id)description;
- (int)log:(int)a0;
- (int)exp:(int)a0;
- (BOOL)isEqual:(id)a0;

@end
