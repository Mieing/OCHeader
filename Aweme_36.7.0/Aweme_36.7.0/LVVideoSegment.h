@class NSString, LVSegmentClipInfo, NSArray, LVVideoCropInfo;

@interface LVVideoSegment : NSObject {
    struct shared_ptr<CutSame::VideoSegment> { struct VideoSegment *__ptr_; struct __shared_weak_count *__cntrl_; } _cppmodel;
}

@property (nonatomic) long long aiMatting;
@property (copy, nonatomic) NSString *alignMode;
@property (copy, nonatomic) NSString *blendPath;
@property (nonatomic) long long cartoonType;
@property (retain, nonatomic) LVSegmentClipInfo *clip;
@property (retain, nonatomic) LVVideoCropInfo *crop;
@property (nonatomic) double cropScale;
@property (nonatomic) long long duration;
@property (copy, nonatomic) NSArray *frames;
@property (copy, nonatomic) NSString *gameplayAlgorithm;
@property (nonatomic) long long height;
@property (copy, nonatomic) NSString *identifier;
@property (nonatomic) BOOL isCartoon;
@property (nonatomic) BOOL isMutable;
@property (nonatomic) BOOL isReverse;
@property (nonatomic) BOOL isSubVideo;
@property (copy, nonatomic) NSString *materialID;
@property (copy, nonatomic) NSString *originPath;
@property (copy, nonatomic) NSString *path;
@property (copy, nonatomic) NSString *relationVideoGroup;
@property (nonatomic) long long sourceStartTime;
@property (nonatomic) long long targetStartTime;
@property (copy, nonatomic) NSString *type;
@property (nonatomic) double volume;
@property (nonatomic) long long width;

- (id)initWithCPPModel:(struct shared_ptr<CutSame::VideoSegment> { struct VideoSegment *x0; struct __shared_weak_count *x1; })a0;
- (struct shared_ptr<CutSame::VideoSegment> { struct VideoSegment *x0; struct __shared_weak_count *x1; })cppmodel;
- (id)copyToNewObject;
- (void)copyCategoryToNewObject:(id)a0;
- (void)setCPPModel:(struct shared_ptr<CutSame::VideoSegment> { struct VideoSegment *x0; struct __shared_weak_count *x1; })a0;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
