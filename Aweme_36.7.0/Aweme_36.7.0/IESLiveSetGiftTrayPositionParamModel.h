@class NSString, NSNumber;

@interface IESLiveSetGiftTrayPositionParamModel : IESLiveBridgeModel

@property (copy, nonatomic) NSString *type;
@property (retain, nonatomic) NSNumber *bottom;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
