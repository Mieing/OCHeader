@class NSArray, NSString;

@interface IESLiveEcOpenVideoPostEditerPostMaterialModel : IESLiveBridgeModel

@property (copy, nonatomic) NSArray *imagePath;
@property (copy, nonatomic) NSString *videoPath;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
