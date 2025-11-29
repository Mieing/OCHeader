@interface AWEPOIExtractFrameUtil : NSObject

+ (void)configFrameExtractMaterials:(id)a0 configModel:(id)a1;
+ (id)configItemWithConfigModel:(id)a0 duration:(double)a1;
+ (struct CGSize { double x0; double x1; })extractFrameSizeWithConfigModel:(id)a0;
+ (void)configFrameExtractMaterials:(id)a0 preferredSize:(struct CGSize { double x0; double x1; })a1 maxFrames:(long long)a2 fps:(double)a3;
+ (void)configFrameExtractMaterials:(id)a0 preferredSize:(struct CGSize { double x0; double x1; })a1 framesCount:(long long)a2;
+ (void)generateFrameExtractMaterialsWithMaterials:(id)a0 configModel:(id)a1 completion:(id /* block */)a2;

@end
