@class NSString;

@interface BDUGLuckySettingsPopupReward : BDUGLuckyBDModel

@property (copy, nonatomic) NSString *amountText;
@property (copy, nonatomic) NSString *unitText;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
