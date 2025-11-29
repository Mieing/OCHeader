@class NSString, LOTKeyframeGroup;

@interface LOTShapeCircle : NSObject

@property (readonly, nonatomic) NSString *keyname;
@property (readonly, nonatomic) LOTKeyframeGroup *position;
@property (readonly, nonatomic) LOTKeyframeGroup *size;
@property (readonly, nonatomic) BOOL reversed;

- (void)_mapFromJSON:(id)a0;
- (void).cxx_destruct;
- (id)initWithJSON:(id)a0;

@end
