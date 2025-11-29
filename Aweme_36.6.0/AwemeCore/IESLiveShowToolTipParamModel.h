@class NSString;

@interface IESLiveShowToolTipParamModel : IESLiveBridgeModel

@property (copy, nonatomic) NSString *type;
@property (copy, nonatomic) NSString *text;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
