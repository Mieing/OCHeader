@class NSString, NSArray;

@interface ITMSkeleton : NSObject

@property (nonatomic) long long skeletonId;
@property (copy, nonatomic) NSString *assetId;
@property (nonatomic) long long frame;
@property (nonatomic) double left;
@property (nonatomic) double right;
@property (nonatomic) double top;
@property (nonatomic) double bottom;
@property (nonatomic) NSArray *points_xy;
@property (nonatomic) NSArray *points_detected;
@property (nonatomic) NSArray *points_score;

- (void).cxx_destruct;
- (id)initWithSkeleton:(struct shared_ptr<ILASDK::Skeleton> { struct Skeleton *x0; struct __shared_weak_count *x1; })a0;

@end
