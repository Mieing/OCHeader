@class NSString;

@interface AWEPluginImageProcessImpl : NSObject <BDPImageProcessPluginDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedPlugin;

- (id)getDominantColorsForImage:(id)a0 topLeftPoint:(struct CGPoint { double x0; double x1; })a1 bottomRightPoint:(struct CGPoint { double x0; double x1; })a2 maxColors:(long long)a3 resultQty:(long long)a4 limitedSize:(double)a5;

@end
