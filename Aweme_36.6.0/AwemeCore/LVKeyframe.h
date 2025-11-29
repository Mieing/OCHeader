@class NSString;

@interface LVKeyframe : NSObject <LVCopying, LVKeyframeProtocol> {
    struct shared_ptr<CutSame::Keyframe> { struct Keyframe *__ptr_; struct __shared_weak_count *__cntrl_; } _cppmodel;
}

@property (nonatomic) unsigned long long type;
@property (nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } time;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *identifier;
@property (nonatomic) long long timeOffset;
@property (copy, nonatomic) NSString *typeString;

+ (id)instanceWithCPPModel:(struct shared_ptr<CutSame::Keyframe> { struct Keyframe *x0; struct __shared_weak_count *x1; })a0;
+ (unsigned long long)KeyframeTypeFromString:(id)a0;
+ (id)stringFromKeyframeType:(unsigned long long)a0;

- (id)initWithCPPModel:(struct shared_ptr<CutSame::Keyframe> { struct Keyframe *x0; struct __shared_weak_count *x1; })a0;
- (id)initWithType:(unsigned long long)a0 time:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (id)copyToAnother;
- (struct shared_ptr<CutSame::Keyframe> { struct Keyframe *x0; struct __shared_weak_count *x1; })cppmodel;
- (id)copyToNewObject;
- (void)copyCategoryToNewObject:(id)a0;
- (void)setCPPModel:(struct shared_ptr<CutSame::Keyframe> { struct Keyframe *x0; struct __shared_weak_count *x1; })a0;
- (void).cxx_destruct;
- (id).cxx_construct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
