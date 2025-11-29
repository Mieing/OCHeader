@class NSString, LOTKeyframeGroup;

@interface LOTShapeRepeater : NSObject

@property (readonly, nonatomic) NSString *keyname;
@property (readonly, nonatomic) LOTKeyframeGroup *copies;
@property (readonly, nonatomic) LOTKeyframeGroup *offset;
@property (readonly, nonatomic) LOTKeyframeGroup *anchorPoint;
@property (readonly, nonatomic) LOTKeyframeGroup *scale;
@property (readonly, nonatomic) LOTKeyframeGroup *position;
@property (readonly, nonatomic) LOTKeyframeGroup *rotation;
@property (readonly, nonatomic) LOTKeyframeGroup *startOpacity;
@property (readonly, nonatomic) LOTKeyframeGroup *endOpacity;

- (void)_mapFromJSON:(id)a0;
- (void).cxx_destruct;
- (id)initWithJSON:(id)a0;

@end
