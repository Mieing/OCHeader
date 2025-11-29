@class NSNumber, NSDictionary;

@interface AnnieSendMultiAnchorEventParamModel : IESLiveBridgeModel

@property (retain, nonatomic) NSNumber *event;
@property (copy, nonatomic) NSDictionary *data;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
