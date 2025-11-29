@interface AWEScrollDetector : NSObject

@property (copy, nonatomic) id /* block */ didDetectScrolling;

- (id)swizzledClassNameForClass:(Class)a0;
- (void)swizzleScrollView:(id)a0;
- (void)unswizzleScrollView:(id)a0;
- (void).cxx_destruct;

@end
