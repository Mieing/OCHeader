@class NSString, NSNumber, NSArray;

@interface IESLiveLiveGetSelectGiftInfoDiyCardInfoModel : IESLiveBridgeModel

@property (copy, nonatomic) NSString *mainText;
@property (copy, nonatomic) NSString *subText;
@property (copy, nonatomic) NSString *giftCellIcon;
@property (copy, nonatomic) NSString *localIconBitmap;
@property (retain, nonatomic) NSNumber *totalDiamonds;
@property (copy, nonatomic) NSString *cardName;
@property (copy, nonatomic) NSArray *plugins;

+ (id)modelContainerPropertyGenericClass;
+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
