@class UIColor, NSString, NSArray, NSDictionary, NSNumber;

@interface AWEStudioRecorderFeaturePropConfig : AWEStudioComposerBaseFeatureConfig

@property (copy, nonatomic) NSString *panelName;
@property (nonatomic, getter=shouldUseCustomPropCategory) BOOL useCustomPropCategory;
@property (copy, nonatomic) NSArray *customCategoryArray;
@property (copy, nonatomic) NSDictionary *customCategoryRequestParameters;
@property (nonatomic) BOOL showStickerPanelAtLaunch;
@property (retain, nonatomic) UIColor *albumNextButtonBackgroundColor;
@property (copy, nonatomic) NSNumber *defaultPanelTabSelectedIndex;
@property (copy, nonatomic) id /* block */ isPropAvailableBlock;
@property (copy, nonatomic) id /* block */ propUnavailableToastBlock;

- (id)propUnavailableToastWithProp:(id)a0 category:(id)a1;
- (id)initWithMode:(unsigned long long)a0;
- (void).cxx_destruct;

@end
