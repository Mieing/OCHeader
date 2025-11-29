@class NSString, NSURL, UIImage, AVURLAsset, NSError;

@interface GPMaterialOutputModel : NSObject

@property (nonatomic) unsigned long long outputType;
@property (retain, nonatomic) NSURL *originURL;
@property (copy, nonatomic) NSURL *processedImageFileURL;
@property (retain, nonatomic) UIImage *processedImage;
@property (copy, nonatomic) NSString *processedImageName;
@property (nonatomic) struct CGSize { double width; double height; } processedImageSize;
@property (retain, nonatomic) AVURLAsset *processAsset;
@property (retain, nonatomic) NSError *error;
@property (copy, nonatomic) NSString *dataConfig;

- (void).cxx_destruct;
- (id)initWithMaterial:(id)a0;

@end
