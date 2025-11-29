@class NSNumber, NSArray;

@interface AWEECShoppingGuideQueryDataResultModel : IESLiveBridgeModel

@property (retain, nonatomic) NSNumber *sceneType;
@property (retain, nonatomic) NSNumber *total;
@property (copy, nonatomic) NSArray *dataList;

+ (id)modelContainerPropertyGenericClass;
+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
