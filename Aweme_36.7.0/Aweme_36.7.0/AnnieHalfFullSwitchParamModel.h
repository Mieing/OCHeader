@interface AnnieHalfFullSwitchParamModel : IESLiveBridgeModel

@property (nonatomic) BOOL enableToFull;
@property (nonatomic) BOOL enableToHalf;
@property (nonatomic) BOOL showCloseIcon;

+ (id)modelCustomPropertyMapper;

@end
