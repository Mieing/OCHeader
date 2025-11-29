@class NSDictionary;

@interface IESGCPGameGetToolbarDataDataModel : IESLiveBridgeModel

@property (copy, nonatomic) NSDictionary *toolbarData;
@property (nonatomic) BOOL isAndienceEntranceShow;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
