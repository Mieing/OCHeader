@class NSString;

@interface LVCanvasConfig : NSObject <LVCopying> {
    struct shared_ptr<CutSame::CanvasConfig> { struct CanvasConfig *__ptr_; struct __shared_weak_count *__cntrl_; } _cppmodel;
}

@property (nonatomic) unsigned long long ratio;
@property (nonatomic) struct CGSize { double x0; double x1; } size;
@property (nonatomic) struct CGSize { double x0; double x1; } originRatioSize;
@property (nonatomic) long long height;
@property (copy, nonatomic) NSString *ratioString;
@property (nonatomic) long long width;

+ (unsigned long long)ratioFromString:(id)a0;
+ (id)ratioStringFromRatio:(unsigned long long)a0;
+ (id)ratioStringMapper;

- (id)initWithCPPModel:(struct shared_ptr<CutSame::CanvasConfig> { struct CanvasConfig *x0; struct __shared_weak_count *x1; })a0;
- (struct CGSize { double x0; double x1; })fitMaxSizeForResolution:(double)a0 originSize:(struct CGSize { double x0; double x1; })a1;
- (id)previewFrameInSuperRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })exportSizeForResolution:(long long)a0;
- (struct shared_ptr<CutSame::CanvasConfig> { struct CanvasConfig *x0; struct __shared_weak_count *x1; })cppmodel;
- (id)copyToNewObject;
- (void)copyCategoryToNewObject:(id)a0;
- (void)setCPPModel:(struct shared_ptr<CutSame::CanvasConfig> { struct CanvasConfig *x0; struct __shared_weak_count *x1; })a0;
- (void).cxx_destruct;
- (id)init;
- (id).cxx_construct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
