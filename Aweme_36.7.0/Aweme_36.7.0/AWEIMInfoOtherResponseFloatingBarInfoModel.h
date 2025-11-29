@class NSArray;

@interface AWEIMInfoOtherResponseFloatingBarInfoModel : IESIMBaseApiModel

@property (nonatomic) BOOL showSetJoinGroupGiftCoupon;
@property (copy, nonatomic) NSArray *generalFloatingBars;

+ (id)generalFloatingBarsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
