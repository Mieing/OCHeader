@interface LynxTransformOriginRaw : NSObject {
    unsigned long long _p0Unit;
    unsigned long long _p1Unit;
}

@property (nonatomic) float p0;
@property (nonatomic) float p1;

+ (id)convertToLynxTransformOriginRaw:(id)a0;

- (BOOL)isP0Valid;
- (BOOL)isP0Percent;
- (BOOL)isP1Valid;
- (BOOL)isP1Percent;
- (BOOL)hasPercent;
- (BOOL)isDefault;
- (BOOL)isValid;
- (id)init;

@end
