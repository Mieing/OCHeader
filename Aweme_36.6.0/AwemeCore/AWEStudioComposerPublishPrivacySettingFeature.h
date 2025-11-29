@interface AWEStudioComposerPublishPrivacySettingFeature : AWEStudioComposerBaseFeatureConfig

@property (nonatomic) BOOL needRememberLastChoice;
@property (nonatomic) BOOL needShowCount;
@property (retain, nonatomic) Class privacyTableViewCellClass;

- (void).cxx_destruct;

@end
