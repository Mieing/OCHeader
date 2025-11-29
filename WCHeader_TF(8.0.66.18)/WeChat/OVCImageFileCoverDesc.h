@class NSString;

@interface OVCImageFileCoverDesc : OVCCoverDesc

@property (readonly, copy, nonatomic) NSString *filePath;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } contentCropRegion;

- (id)initWithFilePath:(id)a0 duration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (id)initWithFilePath:(id)a0 contentCropRegion:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 duration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2;
- (void).cxx_destruct;

@end
