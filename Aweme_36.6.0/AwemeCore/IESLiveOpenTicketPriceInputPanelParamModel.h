@class NSString, NSArray;

@interface IESLiveOpenTicketPriceInputPanelParamModel : IESLiveBridgeModel

@property (copy, nonatomic) NSString *initialValue;
@property (copy, nonatomic) NSArray *amountList;

+ (id)modelCustomPropertyMapper;

@end
