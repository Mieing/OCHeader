@class NSArray;

@interface MMLiveFaceTrackResult : NSObject {
    struct vector<float, std::allocator<float>> { float *__begin_; float *__end_; struct __compressed_pair<float *, std::allocator<float>> { float *__value_; } __end_cap_; } _facePartConf;
    struct vector<float, std::allocator<float>> { float *__begin_; float *__end_; struct __compressed_pair<float *, std::allocator<float>> { float *__value_; } __end_cap_; } _faceFeature;
    struct vector<int, std::allocator<int>> { int *__begin_; int *__end_; struct __compressed_pair<int *, std::allocator<int>> { int *__value_; } __end_cap_; } _partVisible;
    struct vector<float, std::allocator<float>> { float *__begin_; float *__end_; struct __compressed_pair<float *, std::allocator<float>> { float *__value_; } __end_cap_; } _faceAngle;
    struct vector<WeEffect::Point, std::allocator<WeEffect::Point>> { struct Point *__begin_; struct Point *__end_; struct __compressed_pair<WeEffect::Point *, std::allocator<WeEffect::Point>> { struct Point *__value_; } __end_cap_; } _landmarks2D;
}

@property (nonatomic) float zScore;
@property (retain, nonatomic) NSArray *transformedLandmarks2DList;

- (void)setFacePartConf:(struct vector<float, std::allocator<float>> { float *x0; float *x1; struct __compressed_pair<float *, std::allocator<float>> { float *x0; } x2; })a0;
- (struct vector<float, std::allocator<float>> { float *x0; float *x1; struct __compressed_pair<float *, std::allocator<float>> { float *x0; } x2; })facePartConf;
- (void)setFaceFeature:(struct vector<float, std::allocator<float>> { float *x0; float *x1; struct __compressed_pair<float *, std::allocator<float>> { float *x0; } x2; })a0;
- (struct vector<float, std::allocator<float>> { float *x0; float *x1; struct __compressed_pair<float *, std::allocator<float>> { float *x0; } x2; })faceFeature;
- (void)updateFacePartVisible:(struct Span<const int> { int *x0; unsigned long long x1; })a0;
- (struct vector<int, std::allocator<int>> { int *x0; int *x1; struct __compressed_pair<int *, std::allocator<int>> { int *x0; } x2; })partVisible;
- (void)setFaceAngle:(struct vector<float, std::allocator<float>> { float *x0; float *x1; struct __compressed_pair<float *, std::allocator<float>> { float *x0; } x2; })a0;
- (struct vector<float, std::allocator<float>> { float *x0; float *x1; struct __compressed_pair<float *, std::allocator<float>> { float *x0; } x2; })faceAngle;
- (void)updateLandmarks2D:(struct Span<const WeEffect::Point> { struct Point *x0; unsigned long long x1; })a0;
- (struct vector<WeEffect::Point, std::allocator<WeEffect::Point>> { struct Point *x0; struct Point *x1; struct __compressed_pair<WeEffect::Point *, std::allocator<WeEffect::Point>> { struct Point *x0; } x2; })landmarks2D;
- (BOOL)isFitForTrackResult;
- (id)description;
- (BOOL)isBelongToFaceRecord:(id)a0;
- (BOOL)_checkBelongToFaceRecordByNormalizeCompare:(id)a0;
- (BOOL)_checkBelongToFaceRecordByMostNthCompare:(id)a0;
- (void)transformLandmarks2D;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
