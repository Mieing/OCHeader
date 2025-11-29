@class NSArray;

@interface NLEFaceDetectInfoCallbackResult : NSObject

@property (nonatomic) struct vector<vesdk::vealgorithm::VEFaceDetectResult, std::allocator<vesdk::vealgorithm::VEFaceDetectResult>> { struct VEFaceDetectResult *__begin_; struct VEFaceDetectResult *__end_; struct __compressed_pair<vesdk::vealgorithm::VEFaceDetectResult *, std::allocator<vesdk::vealgorithm::VEFaceDetectResult>> { struct VEFaceDetectResult *__value_; } __end_cap_; } cppFaceDetectInfoResults;
@property (retain, nonatomic) NSArray *vefdresults;

- (id)convertToObjC:(struct VEFaceDetectResult { void /* function */ **x0; int x1; float x2; float x3; float x4; float x5; float x6; int x7; int x8; int x9; int x10; int x11; int x12; float x13; float x14; unsigned int x15; struct vector<vesdk::vealgorithm::VEFacePoint, std::allocator<vesdk::vealgorithm::VEFacePoint>> { struct VEFacePoint *x0; struct VEFacePoint *x1; struct __compressed_pair<vesdk::vealgorithm::VEFacePoint *, std::allocator<vesdk::vealgorithm::VEFacePoint>> { struct VEFacePoint *x0; } x2; } x16; struct vector<float, std::allocator<float>> { float *x0; float *x1; struct __compressed_pair<float *, std::allocator<float>> { float *x0; } x2; } x17; })a0;
- (id)initWithCPPResult:(struct vector<vesdk::vealgorithm::VEFaceDetectResult, std::allocator<vesdk::vealgorithm::VEFaceDetectResult>> { struct VEFaceDetectResult *x0; struct VEFaceDetectResult *x1; struct __compressed_pair<vesdk::vealgorithm::VEFaceDetectResult *, std::allocator<vesdk::vealgorithm::VEFaceDetectResult>> { struct VEFaceDetectResult *x0; } x2; })a0;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
