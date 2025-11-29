@class NSString, LOTKeyframeGroup;

@interface LOTShapeTrimPath : NSObject

@property (readonly, nonatomic) NSString *keyname;
@property (readonly, nonatomic) LOTKeyframeGroup *start;
@property (readonly, nonatomic) LOTKeyframeGroup *end;
@property (readonly, nonatomic) LOTKeyframeGroup *offset;

- (void)_mapFromJSON:(id)a0;
- (void).cxx_destruct;
- (id)initWithJSON:(id)a0;

@end
