@class NSArray;

@interface NLESkeletonInfoCallbackResult : NSObject

@property (nonatomic) struct vector<vesdk::vealgorithm::VESkeletonDetectResult, std::allocator<vesdk::vealgorithm::VESkeletonDetectResult>> { struct VESkeletonDetectResult *__begin_; struct VESkeletonDetectResult *__end_; struct __compressed_pair<vesdk::vealgorithm::VESkeletonDetectResult *, std::allocator<vesdk::vealgorithm::VESkeletonDetectResult>> { struct VESkeletonDetectResult *__value_; } __end_cap_; } cppSkeltonResults;
@property (retain, nonatomic) NSArray *veresults;

- (id)convertToObjC:(struct VESkeletonDetectResult { void /* function */ **x0; int x1; int x2; struct VESkeletonRect { float x0; float x1; float x2; float x3; } x3; struct vector<vesdk::vealgorithm::VESkeletonPoint, std::allocator<vesdk::vealgorithm::VESkeletonPoint>> { struct VESkeletonPoint *x0; struct VESkeletonPoint *x1; struct __compressed_pair<vesdk::vealgorithm::VESkeletonPoint *, std::allocator<vesdk::vealgorithm::VESkeletonPoint>> { struct VESkeletonPoint *x0; } x2; } x4; })a0;
- (id)initWithCPPResult:(struct vector<vesdk::vealgorithm::VESkeletonDetectResult, std::allocator<vesdk::vealgorithm::VESkeletonDetectResult>> { struct VESkeletonDetectResult *x0; struct VESkeletonDetectResult *x1; struct __compressed_pair<vesdk::vealgorithm::VESkeletonDetectResult *, std::allocator<vesdk::vealgorithm::VESkeletonDetectResult>> { struct VESkeletonDetectResult *x0; } x2; })a0;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
