@class NSArray, IESGCPGetXplayResolutionInfoCurResolutionModel;

@interface IESGCPGetXplayResolutionInfoDataModel : IESLiveBridgeModel

@property (copy, nonatomic) NSArray *resolutionList;
@property (retain, nonatomic) IESGCPGetXplayResolutionInfoCurResolutionModel *curResolution;

+ (id)modelContainerPropertyGenericClass;
+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
