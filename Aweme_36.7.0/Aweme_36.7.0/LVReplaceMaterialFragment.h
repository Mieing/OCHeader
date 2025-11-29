@class NSString, LVVideoCropInfo;

@interface LVReplaceMaterialFragment : NSObject

@property (copy, nonatomic) NSString *materialId;
@property (nonatomic) unsigned long long targetStartTime;
@property (nonatomic) BOOL isMutable;
@property (nonatomic) unsigned long long alignMode;
@property (nonatomic) BOOL isReverse;
@property (nonatomic) BOOL isCartoon;
@property (nonatomic) unsigned long long width;
@property (nonatomic) unsigned long long height;
@property (nonatomic) unsigned long long duration;
@property (copy, nonatomic) NSString *path;
@property (nonatomic) unsigned long long sourceStartTime;
@property (nonatomic) BOOL isVideo;
@property (retain, nonatomic) LVVideoCropInfo *crop;

+ (struct shared_ptr<CutSame::VideoSegment> { struct VideoSegment *x0; struct __shared_weak_count *x1; })segmentWithFragment:(id)a0;
+ (id)fragementWithVideoSegment:(struct shared_ptr<CutSame::VideoSegment> { struct VideoSegment *x0; struct __shared_weak_count *x1; })a0;
+ (id)cropInfoWithCppCrop:(struct Crop { void /* function */ **x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; })a0;
+ (struct Crop { void /* function */ **x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; })cropWithOCInfo:(id)a0;

- (void).cxx_destruct;

@end
