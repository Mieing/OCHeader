@interface NPVideoMaterial_OC : NPMaterial_OC

@property (nonatomic) struct CGSize { double x0; double x1; } videoSize;
@property (nonatomic) double startTime;
@property (nonatomic) double duration;

- (void)updateMaterialInfoWithBIMResult:(id)a0;

@end
