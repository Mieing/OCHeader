@interface ACCVideoCompositionBuilder : NSObject

+ (id)buildExportSessionWithAsset:(id)a0 clipRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a1 suggestedSize:(struct CGSize { double x0; double x1; })a2;
+ (id)exporSessionWithAsset:(id)a0 suggestedSize:(struct CGSize { double x0; double x1; })a1;

@end
