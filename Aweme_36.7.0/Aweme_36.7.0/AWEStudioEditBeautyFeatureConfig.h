@class NSString, NSNumber;

@interface AWEStudioEditBeautyFeatureConfig : AWEStudioComposerBaseFeatureConfig

@property (copy, nonatomic) NSString *lokiePanelName;
@property (retain, nonatomic) NSNumber *lokieABGroupNum;
@property (nonatomic) BOOL showResetButton;
@property (nonatomic) BOOL panelTurnOffBeautyIfNoBeautyEffect;

- (void).cxx_destruct;

@end
