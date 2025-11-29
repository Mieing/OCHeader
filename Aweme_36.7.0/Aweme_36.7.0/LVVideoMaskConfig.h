@interface LVVideoMaskConfig : NSObject <LVCopying> {
    struct shared_ptr<CutSame::MaskConfig> { struct MaskConfig *__ptr_; struct __shared_weak_count *__cntrl_; } _cppmodel;
}

@property (nonatomic) struct CGPoint { double x0; double x1; } center;
@property (nonatomic) double eclosion;
@property (nonatomic) double aspectRatio;
@property (nonatomic) double centerX;
@property (nonatomic) double centerY;
@property (nonatomic) double feather;
@property (nonatomic) double height;
@property (nonatomic) BOOL invert;
@property (nonatomic) double rotation;
@property (nonatomic) double roundCorner;
@property (nonatomic) double width;

+ (struct CGSize { double x0; double x1; })aspectSizeWith:(struct CGSize { double x0; double x1; })a0 maskSize:(struct CGSize { double x0; double x1; })a1 aspectRatio:(double)a2;

- (id)initWithCPPModel:(struct shared_ptr<CutSame::MaskConfig> { struct MaskConfig *x0; struct __shared_weak_count *x1; })a0;
- (id)copyToAnother;
- (struct shared_ptr<CutSame::MaskConfig> { struct MaskConfig *x0; struct __shared_weak_count *x1; })cppmodel;
- (id)copyToNewObject;
- (void)copyCategoryToNewObject:(id)a0;
- (void)setCPPModel:(struct shared_ptr<CutSame::MaskConfig> { struct MaskConfig *x0; struct __shared_weak_count *x1; })a0;
- (id)initWithBorderSize:(struct CGSize { double x0; double x1; })a0;
- (struct CGSize { double x0; double x1; })aspectSizeWith:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
