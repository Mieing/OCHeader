@class NSString;

@interface LVCutSameVideoMaterial : NSObject <NSCopying> {
    struct shared_ptr<TemplateConsumer::VideoMaterial> { struct VideoMaterial *__ptr_; struct __shared_weak_count *__cntrl_; } _cppmodel;
}

@property (nonatomic) BOOL isMutable;
@property (nonatomic) BOOL isSubVideo;
@property (nonatomic) BOOL isReversed;
@property (nonatomic) BOOL isVideo;
@property (nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } targetStartTime;
@property (nonatomic) struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; } sourceTimeRange;
@property (copy, nonatomic) NSString *materialId;
@property (copy, nonatomic) NSString *slotId;
@property (copy, nonatomic) NSString *relativePath;
@property (nonatomic) long long width;
@property (nonatomic) long long height;
@property (nonatomic) double scale;
@property (nonatomic) double cropXLeft;
@property (nonatomic) double cropXRight;
@property (nonatomic) double cropYLower;
@property (nonatomic) double cropYUpper;
@property (copy, nonatomic) NSString *originPath;

- (id)initWithCPPModel:(struct shared_ptr<TemplateConsumer::VideoMaterial> { struct VideoMaterial *x0; struct __shared_weak_count *x1; })a0;
- (struct shared_ptr<TemplateConsumer::VideoMaterial> { struct VideoMaterial *x0; struct __shared_weak_count *x1; })cppmodel;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
