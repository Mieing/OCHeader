@class NSString;

@interface IESLiveEcSharePanelToShareImageParamModel : IESLiveBridgeModel

@property (copy, nonatomic) NSString *imagePath;
@property (copy, nonatomic) NSString *ecParams;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
