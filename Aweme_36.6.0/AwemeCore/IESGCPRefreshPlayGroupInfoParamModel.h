@class NSArray;

@interface IESGCPRefreshPlayGroupInfoParamModel : IESLiveBridgeModel

@property (copy, nonatomic) NSArray *fansGroupIds;
@property (copy, nonatomic) NSArray *fansGroupNames;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
