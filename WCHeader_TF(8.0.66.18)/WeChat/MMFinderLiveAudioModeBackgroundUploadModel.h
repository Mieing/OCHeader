@class NSData, NSString;

@interface MMFinderLiveAudioModeBackgroundUploadModel : NSObject

@property (nonatomic) unsigned int backgroundType;
@property (nonatomic) BOOL uploaded;
@property (retain, nonatomic) NSData *image;
@property (retain, nonatomic) NSString *video;
@property (retain, nonatomic) NSString *imageUri;
@property (retain, nonatomic) NSString *videoUri;
@property (readonly, nonatomic) BOOL valid;

+ (id)staticBackgroundUploadModelWithImageData:(id)a0;
+ (id)animatedBackgroundUploadModelWithVideoPath:(id)a0 fallbackImageData:(id)a1;

- (void)updateUploadedStaticImageUri:(id)a0;
- (void)updateUploadedAnimatedVideoUri:(id)a0 fallbackImageUri:(id)a1;
- (id)backgroundConfiguration;
- (BOOL)validPreUpload;
- (BOOL)validPostUpload;
- (void).cxx_destruct;

@end
