@class DUXPopover, AFDSocialTextGuideFeatureConfig;
@protocol ACCRecordSwitchModeService, ACCRecorderViewContainer;

@interface AFDSocialTextGuideComponent : ACCFeatureComponent

@property (retain, nonatomic) AFDSocialTextGuideFeatureConfig *featureConfig;
@property (weak, nonatomic) id<ACCRecorderViewContainer> viewContainer;
@property (weak, nonatomic) id<ACCRecordSwitchModeService> switchModeService;
@property (retain, nonatomic) DUXPopover *popover;
@property (nonatomic) BOOL hasShownPopover;

- (void)componentDidAppear;
- (void)showGuidePopover;
- (void)didClickContentLabel;
- (void).cxx_destruct;

@end
