@class NSNumber, NSString;

@interface IESLiveLiveGetSelectGiftInfoBuffInfoModel : IESLiveBridgeModel

@property (retain, nonatomic) NSNumber *buffLevel;
@property (retain, nonatomic) NSNumber *buffGiftId;
@property (retain, nonatomic) NSNumber *buffDiamondCount;
@property (copy, nonatomic) NSString *buffIcon;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
