@class UIImage, NSString, ACCAIGCLoraCheckModel;

@interface ACCAIGCUGCFusionCreationToolsBachModel : NSObject <NSCopying>

@property (retain, nonatomic) UIImage *resultImage;
@property (copy, nonatomic) NSString *localFilePath;
@property (retain, nonatomic) ACCAIGCLoraCheckModel *checkModel;
@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *phLocalIdentifier;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
