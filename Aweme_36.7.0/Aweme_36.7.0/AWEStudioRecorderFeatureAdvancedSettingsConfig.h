@class NSNumber, AWEStudioFeatureRecordDurationItem;

@interface AWEStudioRecorderFeatureAdvancedSettingsConfig : AWEStudioComposerBaseFeatureConfig

@property (copy, nonatomic) NSNumber *forceHideBarItem;
@property (retain, nonatomic) AWEStudioFeatureRecordDurationItem *recordDurationItem;
@property (nonatomic) BOOL disableFrameRatioItem;
@property (nonatomic) BOOL disableHDPhotoItem;
@property (copy, nonatomic) NSNumber *forceHideGridView;

- (void).cxx_destruct;

@end
