@class NSString, LOTKeyframeGroup;

@interface LOTShapeStar : NSObject

@property (readonly, nonatomic) NSString *keyname;
@property (readonly, nonatomic) LOTKeyframeGroup *outerRadius;
@property (readonly, nonatomic) LOTKeyframeGroup *outerRoundness;
@property (readonly, nonatomic) LOTKeyframeGroup *innerRadius;
@property (readonly, nonatomic) LOTKeyframeGroup *innerRoundness;
@property (readonly, nonatomic) LOTKeyframeGroup *position;
@property (readonly, nonatomic) LOTKeyframeGroup *numberOfPoints;
@property (readonly, nonatomic) LOTKeyframeGroup *rotation;
@property (readonly, nonatomic) unsigned long long type;

- (void)_mapFromJSON:(id)a0;
- (void).cxx_destruct;
- (id)initWithJSON:(id)a0;

@end
