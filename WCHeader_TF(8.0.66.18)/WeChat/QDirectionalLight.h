@interface QDirectionalLight : QCommonLight

@property (nonatomic) union _GLKVector3 { struct { float x; float y; float z; } ; struct { float r; float g; float b; } ; struct { float s; float t; float p; } ; float v[3]; } direction;

- (id)init;

@end
