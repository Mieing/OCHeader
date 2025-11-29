@class NSString, NLEStyClip_OC, NPBIMResult;

@interface NPFollowShootParam_OC : NSObject

@property (nonatomic) struct shared_ptr<nle::preset::NPFollowShootParam> { struct NPFollowShootParam *__ptr_; struct __shared_weak_count *__cntrl_; } cppValue;
@property (copy, nonatomic) NSString *mutableSlotID;
@property (retain, nonatomic) NLEStyClip_OC *clip;
@property (nonatomic) long long timeClipStart;
@property (nonatomic) long long timeClipEnd;
@property (retain, nonatomic) NPBIMResult *BIMResult;
@property (nonatomic) long long resourceWidth;
@property (nonatomic) long long resourceHeight;
@property (nonatomic) long long resourceDuration;

- (id)initWithCPPNode:(struct shared_ptr<nle::preset::NPFollowShootParam> { struct NPFollowShootParam *x0; struct __shared_weak_count *x1; })a0;
- (void)clearTimeAndClipInfo;
- (void).cxx_destruct;
- (id)init;
- (id).cxx_construct;

@end
