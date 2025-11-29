@class LOTKeyframeGroup;

@interface LOTMask : NSObject

@property (readonly, nonatomic) BOOL closed;
@property (readonly, nonatomic) BOOL inverted;
@property (readonly, nonatomic) unsigned long long maskMode;
@property (readonly, nonatomic) LOTKeyframeGroup *maskPath;
@property (readonly, nonatomic) LOTKeyframeGroup *opacity;
@property (readonly, nonatomic) LOTKeyframeGroup *expansion;

- (void)_mapFromJSON:(id)a0;
- (void).cxx_destruct;
- (id)initWithJSON:(id)a0;

@end
