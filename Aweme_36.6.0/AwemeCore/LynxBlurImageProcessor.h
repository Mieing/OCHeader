@class NSString;

@interface LynxBlurImageProcessor : NSObject <LynxImageProcessor> {
    double _blurRadius;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)processImage:(id)a0;
- (id)initWithBlurRadius:(double)a0;
- (id)cacheKey;

@end
