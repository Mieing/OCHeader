@class IESLiveLiveGetSelectGiftInfoBuffInfoModel, NSString, IESLiveLiveGetSelectGiftInfoDiyCardInfoModel, NSNumber;

@interface IESLiveLiveGetSelectGiftInfoDataModel : IESLiveBridgeModel

@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) NSNumber *giftId;
@property (copy, nonatomic) NSString *icon;
@property (retain, nonatomic) NSNumber *diamondCount;
@property (retain, nonatomic) NSNumber *type;
@property (copy, nonatomic) NSString *describe;
@property (retain, nonatomic) IESLiveLiveGetSelectGiftInfoBuffInfoModel *buffInfo;
@property (retain, nonatomic) IESLiveLiveGetSelectGiftInfoDiyCardInfoModel *diyCardInfo;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
