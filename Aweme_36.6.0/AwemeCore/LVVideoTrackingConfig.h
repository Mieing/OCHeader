@interface LVVideoTrackingConfig : NSObject {
    struct shared_ptr<CutSame::VideoTrackingConfig> { struct VideoTrackingConfig *__ptr_; struct __shared_weak_count *__cntrl_; } _cppmodel;
}

@property (nonatomic) double centerX;
@property (nonatomic) double centerY;
@property (nonatomic) double height;
@property (nonatomic) double rotation;
@property (nonatomic) double width;

- (id)initWithCPPModel:(struct shared_ptr<CutSame::VideoTrackingConfig> { struct VideoTrackingConfig *x0; struct __shared_weak_count *x1; })a0;
- (struct shared_ptr<CutSame::VideoTrackingConfig> { struct VideoTrackingConfig *x0; struct __shared_weak_count *x1; })cppmodel;
- (id)copyToNewObject;
- (void)copyCategoryToNewObject:(id)a0;
- (void)setCPPModel:(struct shared_ptr<CutSame::VideoTrackingConfig> { struct VideoTrackingConfig *x0; struct __shared_weak_count *x1; })a0;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
