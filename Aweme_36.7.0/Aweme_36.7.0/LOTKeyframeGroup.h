@class NSArray;

@interface LOTKeyframeGroup : NSObject

@property (readonly, nonatomic) NSArray *keyframes;

- (void)buildKeyframesFromData:(id)a0;
- (void)remapKeyframesWithBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (id)initWithData:(id)a0;

@end
