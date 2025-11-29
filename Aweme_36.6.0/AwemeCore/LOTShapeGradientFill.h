@class NSString, NSNumber, LOTKeyframeGroup;

@interface LOTShapeGradientFill : NSObject

@property (readonly, nonatomic) NSString *keyname;
@property (readonly, nonatomic) NSNumber *numberOfColors;
@property (readonly, nonatomic) LOTKeyframeGroup *startPoint;
@property (readonly, nonatomic) LOTKeyframeGroup *endPoint;
@property (readonly, nonatomic) LOTKeyframeGroup *gradient;
@property (readonly, nonatomic) LOTKeyframeGroup *opacity;
@property (readonly, nonatomic) BOOL evenOddFillRule;
@property (readonly, nonatomic) unsigned long long type;

- (void)_mapFromJSON:(id)a0;
- (void).cxx_destruct;
- (id)initWithJSON:(id)a0;

@end
