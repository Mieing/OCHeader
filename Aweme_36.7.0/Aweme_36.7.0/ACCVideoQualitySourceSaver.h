@class NSString, AWEVideoPublishViewModel;

@interface ACCVideoQualitySourceSaver : NSObject <ACCVideoQualitySaverProtocol>

@property (weak, nonatomic) AWEVideoPublishViewModel *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)transParam;
- (void)setWatermarkFileBitrate:(id)a0;
- (void)setWatermarkFileResolution:(struct CGSize { double x0; double x1; })a0;
- (void)setWatermarkFileFps:(long long)a0;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;

@end
