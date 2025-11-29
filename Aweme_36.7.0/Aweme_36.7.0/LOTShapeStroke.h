@class NSString, LOTKeyframeGroup, NSArray;

@interface LOTShapeStroke : NSObject

@property (readonly, nonatomic) NSString *keyname;
@property (readonly, nonatomic) BOOL fillEnabled;
@property (readonly, nonatomic) LOTKeyframeGroup *color;
@property (readonly, nonatomic) LOTKeyframeGroup *opacity;
@property (readonly, nonatomic) LOTKeyframeGroup *width;
@property (readonly, nonatomic) LOTKeyframeGroup *dashOffset;
@property (readonly, nonatomic) unsigned long long capType;
@property (readonly, nonatomic) unsigned long long joinType;
@property (readonly, nonatomic) NSArray *lineDashPattern;

- (void)_mapFromJSON:(id)a0;
- (void).cxx_destruct;
- (id)initWithJSON:(id)a0;

@end
