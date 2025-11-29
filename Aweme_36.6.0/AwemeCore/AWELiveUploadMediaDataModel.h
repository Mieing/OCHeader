@class NSArray;

@interface AWELiveUploadMediaDataModel : IESLiveBridgeModel

@property (copy, nonatomic) NSArray *videoResultList;
@property (copy, nonatomic) NSArray *imageResultList;
@property (copy, nonatomic) NSArray *imageResultListV2;
@property (copy, nonatomic) NSArray *videoResultListV2;

+ (id)modelContainerPropertyGenericClass;
+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
