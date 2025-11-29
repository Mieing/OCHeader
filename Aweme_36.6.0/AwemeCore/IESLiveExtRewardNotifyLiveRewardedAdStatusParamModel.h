@class NSString, NSNumber;

@interface IESLiveExtRewardNotifyLiveRewardedAdStatusParamModel : IESLiveBridgeModel

@property (copy, nonatomic) NSString *roomId;
@property (retain, nonatomic) NSNumber *watchTime;
@property (retain, nonatomic) NSNumber *inspireTime;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
