@class NSArray;

@interface AWELiveSelectMediaDataModel : IESLiveBridgeModel

@property (copy, nonatomic) NSArray *mediaList;

+ (id)modelContainerPropertyGenericClass;
+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
