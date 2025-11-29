@class NSString, NSArray, NLEWatermarkMask_OC;

@interface NLEWatermarkParam_OC : NSObject

@property (nonatomic) struct shared_ptr<nle::media::NLEWatermarkParam> { struct NLEWatermarkParam *__ptr_; struct __shared_weak_count *__cntrl_; } cppWatermarkParam;
@property (nonatomic) BOOL needExtFile;
@property (retain, nonatomic) NSString *extFile;
@property (retain, nonatomic) NSArray *entities;
@property (retain, nonatomic) NLEWatermarkMask_OC *mask;
@property (retain, nonatomic) NSArray *images;
@property (retain, nonatomic) NSArray *secondHalfImages;
@property (nonatomic) long long interval;
@property (nonatomic) long long xOffset;
@property (nonatomic) long long yOffset;
@property (nonatomic) long long width;
@property (nonatomic) long long height;
@property (nonatomic) long long duration;
@property (nonatomic) long long position;
@property (nonatomic) long long rotation;

- (void).cxx_destruct;
- (id)init;
- (id).cxx_construct;

@end
