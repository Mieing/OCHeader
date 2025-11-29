@class NSString;

@interface NLEWatermarkMask_OC : NSObject

@property (nonatomic) struct shared_ptr<nle::media::NLEWatermarkMask> { struct NLEWatermarkMask *__ptr_; struct __shared_weak_count *__cntrl_; } cppWatermarkMask;
@property (retain, nonatomic) NSString *maskImage;
@property (nonatomic) long long xOffset;
@property (nonatomic) long long yOffset;
@property (nonatomic) long long width;
@property (nonatomic) long long height;

- (void).cxx_destruct;
- (id)init;
- (id).cxx_construct;

@end
