@class NSString, NSArray;

@interface IESLiveMainArchRequestCommonSubscribePopupServiceSubscribeInfoModel : IESLiveBridgeModel

@property (copy, nonatomic) NSString *serviceAccountId;
@property (nonatomic) BOOL subscribeStatus;
@property (nonatomic) BOOL disturbStatus;
@property (copy, nonatomic) NSArray *subcategorySubscribeInfos;

+ (id)modelContainerPropertyGenericClass;
+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
