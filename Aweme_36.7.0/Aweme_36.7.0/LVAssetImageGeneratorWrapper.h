@class LVAssetImageGenerator, NSString;

@interface LVAssetImageGeneratorWrapper : NSObject <ACCFrameExtracting>

@property (retain, nonatomic) LVAssetImageGenerator *innerImageGenerator;
@property (nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } requestedTimeToleranceBefore;
@property (nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } requestedTimeToleranceAfter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)generaImageWithEdgeInset:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0 atTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (void).cxx_destruct;
- (id)initWithAsset:(id)a0;

@end
