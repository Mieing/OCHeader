@class NSString, NSNumber, LOTKeyframeGroup;

@interface LOTShapePath : NSObject

@property (readonly, nonatomic) NSString *keyname;
@property (readonly, nonatomic) BOOL closed;
@property (readonly, nonatomic) NSNumber *index;
@property (readonly, nonatomic) LOTKeyframeGroup *shapePath;

- (void)_mapFromJSON:(id)a0;
- (void).cxx_destruct;
- (id)initWithJSON:(id)a0;

@end
