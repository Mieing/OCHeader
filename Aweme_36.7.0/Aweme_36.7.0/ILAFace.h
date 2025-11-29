@class NSString, NSArray;

@interface ILAFace : NSObject {
    struct shared_ptr<ILASDK::Face> { struct Face *__ptr_; struct __shared_weak_count *__cntrl_; } face;
}

@property (nonatomic) long long faceId;
@property (copy, nonatomic) NSString *assetId;
@property (nonatomic) long long frame;
@property (nonatomic) double left;
@property (nonatomic) double right;
@property (nonatomic) double top;
@property (nonatomic) double bottom;
@property (nonatomic) double yaw;
@property (nonatomic) double pitch;
@property (nonatomic) double roll;
@property (nonatomic) double happyScore;
@property (nonatomic) double realFaceProb;
@property (nonatomic) double quality;
@property (nonatomic) double age;
@property (nonatomic) double boyProb;
@property (nonatomic) double eyeDist;
@property (nonatomic) double score;
@property (nonatomic) double proportion;
@property (nonatomic) BOOL male;
@property (retain, nonatomic) NSArray *features;
@property (nonatomic) double attractive;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } faceRect;
@property (nonatomic) double faceOcclusionProb;
@property (nonatomic) double faceIncompleteProb;

- (struct shared_ptr<ILASDK::Face> { struct Face *x0; struct __shared_weak_count *x1; })getTargetFace;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)initWithFace:(struct shared_ptr<ILASDK::Face> { struct Face *x0; struct __shared_weak_count *x1; })a0;

@end
