@class NSArray, NSNumber, IESGCPGamecpPreviewImagesTrackerNodeModel;

@interface IESGCPGamecpPreviewImagesParamModel : IESLiveBridgeModel

@property (copy, nonatomic) NSArray *imageUrlList;
@property (copy, nonatomic) NSArray *originDataList;
@property (retain, nonatomic) NSNumber *position;
@property (nonatomic) BOOL enableRotation;
@property (copy, nonatomic) NSArray *thumbImageUrlList;
@property (retain, nonatomic) IESGCPGamecpPreviewImagesTrackerNodeModel *trackerNode;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
