@class NSString, NSDictionary, NSNumber;

@interface IESGCPGamecpPreviewImagesTrackerNodeModel : IESLiveBridgeModel

@property (copy, nonatomic) NSString *pageName;
@property (copy, nonatomic) NSDictionary *attr;
@property (retain, nonatomic) NSNumber *action;
@property (copy, nonatomic) NSDictionary *route;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
