@interface BDPScanCodePluginModel : BDPBasePluginModel

@property (nonatomic) long long bdp_scanType;
@property (nonatomic) BOOL onlyFromCamera;
@property (nonatomic) BOOL barCodeInput;

- (BOOL)modelCustomTransformFromDictionary:(id)a0;

@end
