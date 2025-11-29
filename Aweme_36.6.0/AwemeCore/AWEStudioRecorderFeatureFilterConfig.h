@class NSString;

@interface AWEStudioRecorderFeatureFilterConfig : AWEStudioComposerBaseFeatureConfig

@property (nonatomic) BOOL allowSwipeSwitchFilterGesture;
@property (copy, nonatomic) NSString *filterPanelName;
@property (copy, nonatomic) NSString *emptyFilterItemName;

- (void).cxx_destruct;

@end
