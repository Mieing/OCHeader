@class NSArray;

@interface IESLiveOpenMultiSelectPhotoLibraryDataModel : IESLiveBridgeModel

@property (copy, nonatomic) NSArray *selectedPhotoArray;

+ (id)modelContainerPropertyGenericClass;
+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
