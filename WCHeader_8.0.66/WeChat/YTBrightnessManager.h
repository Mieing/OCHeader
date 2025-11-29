@class BrightnessDevice, NSTimer;
@protocol YTOnGetBrightness;

@interface YTBrightnessManager : NSObject {
    struct vector<float, std::allocator<float>> { float *__begin_; float *__end_; struct __compressed_pair<float *, std::allocator<float>> { float *__value_; } __end_cap_; } vec;
}

@property (weak, nonatomic) id<YTOnGetBrightness> onGetBrightnessDelegate;
@property (retain, nonatomic) BrightnessDevice *brightnessDevice;
@property (retain, nonatomic) NSTimer *timer;
@property (nonatomic) int recordCount;

+ (id)getUploadDic:(float)a0;

- (int)getBrightness:(id)a0 overTime:(double)a1;
- (void)stopBrightness;
- (void)onGetBrightnessInner:(float)a0;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
