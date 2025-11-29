@class NSArray, NSDictionary, NSString;

@interface IESLiveRevenueSetRtcEffectEnableExtraModel : IESLiveBridgeModel

@property (copy, nonatomic) NSArray *nodePaths;
@property (copy, nonatomic) NSDictionary *streamMapper;
@property (copy, nonatomic) NSString *layoutKey;
@property (copy, nonatomic) NSString *rtcKey;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
