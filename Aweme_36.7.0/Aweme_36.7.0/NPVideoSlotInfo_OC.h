@class NSString, NLEStyClip_OC;

@interface NPVideoSlotInfo_OC : NPBaseSlotInfo_OC {
    struct shared_ptr<nle::preset::NPVideoSlotInfo> { struct NPVideoSlotInfo *__ptr_; struct __shared_weak_count *__cntrl_; } _cppValue;
}

@property (nonatomic) struct shared_ptr<nle::preset::NPVideoSlotInfo> { struct NPVideoSlotInfo *x0; struct __shared_weak_count *x1; } cppValue;
@property (readonly, nonatomic) double volume;
@property (readonly, nonatomic) double speed;
@property (readonly, nonatomic) double rotation;
@property (readonly, nonatomic) double transformX;
@property (readonly, nonatomic) double transformY;
@property (readonly, nonatomic) double scale;
@property (readonly, copy, nonatomic) NSString *reasourcePath;
@property (readonly, nonatomic) long long resStartTime;
@property (readonly, nonatomic) long long resEndTime;
@property (readonly, nonatomic) NLEStyClip_OC *clip;
@property (readonly, nonatomic) BOOL isUserMaterial;

- (id)initWithCPPNode:(struct shared_ptr<nle::preset::NPVideoSlotInfo> { struct NPVideoSlotInfo *x0; struct __shared_weak_count *x1; })a0;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
