@class NSString, NSNumber, IESLiveOpenLiveLifeGrouponPageParamsModel;

@interface IESLiveOpenLiveLifeGrouponPageParamModel : IESLiveBridgeModel

@property (copy, nonatomic) NSString *pageSource;
@property (retain, nonatomic) NSNumber *pageType;
@property (retain, nonatomic) IESLiveOpenLiveLifeGrouponPageParamsModel *params;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
