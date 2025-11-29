@class NSString, LOTKeyframeGroup;

@interface LOTShapeFill : NSObject

@property (readonly, nonatomic) NSString *keyname;
@property (readonly, nonatomic) BOOL fillEnabled;
@property (readonly, nonatomic) LOTKeyframeGroup *color;
@property (readonly, nonatomic) LOTKeyframeGroup *opacity;
@property (readonly, nonatomic) BOOL evenOddFillRule;

- (void)_mapFromJSON:(id)a0;
- (void).cxx_destruct;
- (id)initWithJSON:(id)a0;

@end
