@interface BDRWhiteScreenDetector : NSObject

+ (id)imageWithView:(id)a0;
+ (id)sharedInstance;

- (void)calculateValidPixelPercentageWithImage:(id)a0 scaledTo:(unsigned long long)a1 scaledImageRef:(id *)a2 baseColor:(id)a3 validPercentage:(double *)a4;
- (void)calculateCommonViewValidPercentageWithView:(id)a0 scaledTo:(unsigned long long)a1 baseColor:(id)a2 extraParams:(id)a3 completionBlock:(id /* block */)a4;

@end
