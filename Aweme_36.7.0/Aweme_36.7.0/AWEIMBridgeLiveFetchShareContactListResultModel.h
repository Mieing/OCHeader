@class NSDictionary, NSArray;

@interface AWEIMBridgeLiveFetchShareContactListResultModel : IESLiveBridgeModel

@property (copy, nonatomic) NSDictionary *data;
@property (copy, nonatomic) NSArray *shareList;

+ (id)modelContainerPropertyGenericClass;
+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
