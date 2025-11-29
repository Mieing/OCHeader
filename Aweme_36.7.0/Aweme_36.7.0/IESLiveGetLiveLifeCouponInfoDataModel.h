@class NSArray;

@interface IESLiveGetLiveLifeCouponInfoDataModel : IESLiveBridgeModel

@property (copy, nonatomic) NSArray *collectedList;
@property (copy, nonatomic) NSArray *allList;
@property (retain, nonatomic) id extra;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
