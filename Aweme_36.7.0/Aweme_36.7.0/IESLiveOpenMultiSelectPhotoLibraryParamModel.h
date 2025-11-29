@class NSNumber;

@interface IESLiveOpenMultiSelectPhotoLibraryParamModel : IESLiveBridgeModel

@property (retain, nonatomic) NSNumber *maxFileSize;
@property (retain, nonatomic) NSNumber *maxSelectCount;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
