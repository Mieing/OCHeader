@class NSString, NSNumber;

@interface AWEECRequestMarketingPinWidgetParamModel : IESLiveBridgeModel

@property (copy, nonatomic) NSString *key;
@property (retain, nonatomic) NSNumber *operation;
@property (retain, nonatomic) id extra;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
