@class BDPFloatBallActivityConfigModel, BDPFloatBallGiftPackageConfigModel;

@interface BDPFloatBallIconTypesConfigModel : NSObject

@property (retain, nonatomic) BDPFloatBallActivityConfigModel *activity;
@property (retain, nonatomic) BDPFloatBallGiftPackageConfigModel *giftPackage;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
