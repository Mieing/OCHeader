@class NSString, NSNumber;

@interface IESLiveOpenRechargeDialogDataModel : IESLiveBridgeModel

@property (copy, nonatomic) NSString *rechargeCode;
@property (retain, nonatomic) NSNumber *diamondBalance;

+ (id)modelCustomPropertyMapper;

@end
