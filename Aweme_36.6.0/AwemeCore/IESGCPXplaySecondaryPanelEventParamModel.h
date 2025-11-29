@class NSString;

@interface IESGCPXplaySecondaryPanelEventParamModel : IESLiveBridgeModel

@property (copy, nonatomic) NSString *buttonType;
@property (copy, nonatomic) NSString *text;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
