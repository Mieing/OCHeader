@interface AWEPadFakeProgressSliderView : AWEFakeProgressSliderView

@property (nonatomic) struct { double containerHeight; double grayViewHeight; double grayViewRadius; double thumbViewRadius; double thumbViewWidth; double thumbViewHeight; double whiteOffset; double grayOffset; } wakeconfig;
@property (nonatomic) struct { double containerHeight; double grayViewHeight; double grayViewRadius; double thumbViewRadius; double thumbViewWidth; double thumbViewHeight; double whiteOffset; double grayOffset; } silentConfig;

+ (Class)aAWEPadModuleAdapterClass;

- (id)aAWEPadModuleAdapter;
- (void)remakeUI;
- (id)init;
- (void)show:(BOOL)a0 completion:(id /* block */)a1;
- (void)setPercentage:(double)a0;

@end
