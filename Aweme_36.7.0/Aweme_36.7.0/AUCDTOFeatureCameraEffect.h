@class NSString;

@interface AUCDTOFeatureCameraEffect : MTLModel

@property (copy, nonatomic) NSString *customPanelName;
@property (copy, nonatomic) NSString *effectId;
@property (nonatomic) BOOL uiHide;
@property (nonatomic) BOOL autoOpenSlipPropPanel;
@property (nonatomic) BOOL enablesTimeConsumingProp;

- (void).cxx_destruct;

@end
