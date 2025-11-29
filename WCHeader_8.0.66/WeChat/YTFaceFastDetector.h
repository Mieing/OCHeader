@interface YTFaceFastDetector : NSObject

+ (unsigned long long)getFaceCountFromImage:(id)a0;

- (void)dealloc;
- (id)init;
- (int)globalInitDetector;
- (int)globalReleaseDetector;
- (struct Mat { int x0; int x1; int x2; int x3; char *x4; int *x5; char *x6; char *x7; char *x8; struct MatAllocator *x9; struct MSize { int *x0; } x10; struct MStep { unsigned long long *x0; unsigned long long x1[2]; } x11; })getCvRgbFromCGImageRef:(struct CGImage { } *)a0;
- (unsigned long long)getImageFaceCount:(id)a0;

@end
