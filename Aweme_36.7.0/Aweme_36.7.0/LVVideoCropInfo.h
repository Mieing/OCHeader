@interface LVVideoCropInfo : NSObject {
    struct shared_ptr<CutSame::Crop> { struct Crop *__ptr_; struct __shared_weak_count *__cntrl_; } _cppmodel;
}

@property (nonatomic) struct CGPoint { double x0; double x1; } upperLeftPoint;
@property (nonatomic) struct CGPoint { double x0; double x1; } upperRightPoint;
@property (nonatomic) struct CGPoint { double x0; double x1; } lowerLeftPoint;
@property (nonatomic) struct CGPoint { double x0; double x1; } lowerRightPoint;
@property (nonatomic) double lowerLeftX;
@property (nonatomic) double lowerLeftY;
@property (nonatomic) double lowerRightX;
@property (nonatomic) double lowerRightY;
@property (nonatomic) double upperLeftX;
@property (nonatomic) double upperLeftY;
@property (nonatomic) double upperRightX;
@property (nonatomic) double upperRightY;

+ (id)defaultCrop;

- (id)initWithCPPModel:(struct shared_ptr<CutSame::Crop> { struct Crop *x0; struct __shared_weak_count *x1; })a0;
- (struct shared_ptr<CutSame::Crop> { struct Crop *x0; struct __shared_weak_count *x1; })cppmodel;
- (id)copyToNewObject;
- (void)copyCategoryToNewObject:(id)a0;
- (void)setCPPModel:(struct shared_ptr<CutSame::Crop> { struct Crop *x0; struct __shared_weak_count *x1; })a0;
- (void).cxx_destruct;
- (id).cxx_construct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
