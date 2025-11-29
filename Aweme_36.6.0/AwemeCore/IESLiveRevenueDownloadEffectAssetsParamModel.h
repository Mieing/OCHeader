@class NSArray, NSNumber, NSString;

@interface IESLiveRevenueDownloadEffectAssetsParamModel : IESLiveBridgeModel

@property (copy, nonatomic) NSArray *effectIds;
@property (retain, nonatomic) NSNumber *priority;
@property (copy, nonatomic) NSString *platform;
@property (copy, nonatomic) NSString *panelType;
@property (copy, nonatomic) NSArray *resourceIds;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
