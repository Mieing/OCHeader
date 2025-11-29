@class NSString;

@interface AWERepoHDPhotoModel : NSObject

@property (nonatomic) BOOL useHDTakePicture;
@property (nonatomic) BOOL didTakeHDPicture;
@property (nonatomic) BOOL isEditHadApplied;
@property (retain, nonatomic) NSString *hdPhotoDraftPath;
@property (nonatomic) struct CGSize { double width; double height; } hdPhotoSize;
@property (nonatomic) double hdPhotoScale;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
