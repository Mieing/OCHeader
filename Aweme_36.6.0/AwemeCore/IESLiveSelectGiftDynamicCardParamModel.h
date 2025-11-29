@class NSNumber, NSDictionary;

@interface IESLiveSelectGiftDynamicCardParamModel : IESLiveBridgeModel

@property (retain, nonatomic) NSNumber *cardType;
@property (copy, nonatomic) NSDictionary *cardInfo;
@property (nonatomic) BOOL keepOperationLevel;
@property (copy, nonatomic) NSDictionary *extraParams;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
