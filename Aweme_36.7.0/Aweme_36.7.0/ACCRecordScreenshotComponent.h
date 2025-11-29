@protocol ACCRecordPropService;

@interface ACCRecordScreenshotComponent : ACCFeatureComponent

@property (retain, nonatomic) id<ACCRecordPropService> propService;

- (void)componentDidAppear;
- (void)componentDidDisappear;
- (void)p_onUserDidTakeScreenshot;
- (void).cxx_destruct;

@end
