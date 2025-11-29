@class NSString, UIImage, NSArray;

@interface ACCAIGCUGCFrameReferenceImageModel : ACCAIGCUGCFrameReferenceModel

@property (copy, nonatomic) NSString *frameReferenceFilePath;
@property (copy, nonatomic) NSString *frameReferenceRelativeFilePath;
@property (copy, nonatomic) NSString *frameReferencePHLocalIdentifier;
@property (copy, nonatomic) NSString *frameReferenceMemoryRelativeFilePath;
@property (copy, nonatomic) NSString *frameReferenceURI;
@property (nonatomic) long long frameReferencePetCount;
@property (nonatomic) long long frameReferenceFaceCount;
@property (nonatomic) long long frameReferenceAge;
@property (copy, nonatomic) NSString *frameReferenceGender;
@property (nonatomic) long long frameReferenceImageWidth;
@property (nonatomic) long long frameReferenceImageHeight;
@property (copy, nonatomic) NSString *vlmInfo;
@property (copy, nonatomic) NSString *realReference;
@property (retain, nonatomic) UIImage *resultImage;
@property (retain, nonatomic) NSArray *displayUrls;

+ (id)buildModelFromSampleImageDict:(id)a0 effectModel:(id)a1;
+ (id)JSONKeyPathsByPropertyKey;

- (BOOL)hasNotUpload;
- (id)getFrameReferenceReqParams;
- (void)resetFrameReference;
- (void)setFrameReferenceFilePathAction:(id)a0 frameReferenceIdentifier:(id)a1 needReset:(BOOL)a2;
- (void)setInfoWithFrameReferenceCheckModel:(id)a0 imageSize:(struct CGSize { double x0; double x1; })a1;
- (void)setInfoWithFrameReferenceCheckModeForFollowPath:(id)a0 imageSize:(struct CGSize { double x0; double x1; })a1;
- (void).cxx_destruct;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
