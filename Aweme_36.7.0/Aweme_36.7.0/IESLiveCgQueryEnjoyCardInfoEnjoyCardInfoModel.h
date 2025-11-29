@class NSNumber;

@interface IESLiveCgQueryEnjoyCardInfoEnjoyCardInfoModel : IESLiveBridgeModel

@property (nonatomic) BOOL hasBought;
@property (retain, nonatomic) NSNumber *availableDays;
@property (retain, nonatomic) NSNumber *expireTime;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
