@class NSString, LOTKeyframeGroup;

@interface LOTShapeTransform : NSObject

@property (readonly, nonatomic) NSString *keyname;
@property (readonly, nonatomic) LOTKeyframeGroup *position;
@property (readonly, nonatomic) LOTKeyframeGroup *anchor;
@property (readonly, nonatomic) LOTKeyframeGroup *scale;
@property (readonly, nonatomic) LOTKeyframeGroup *rotation;
@property (readonly, nonatomic) LOTKeyframeGroup *opacity;

- (void)_mapFromJSON:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithJSON:(id)a0;

@end
