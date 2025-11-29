@class UIColor, NSString, NSDictionary, UIImage, NSError, NSURL, AWEResourceUploadParametersResponseModel;

@interface AWEQuickShareTaskPrepareResult : NSObject

@property (retain, nonatomic) NSError *globalError;
@property (retain, nonatomic) NSString *enterFrom;
@property (retain, nonatomic) UIColor *topColor;
@property (retain, nonatomic) UIColor *bottomColor;
@property (retain, nonatomic) NSString *startColor;
@property (retain, nonatomic) NSString *endColor;
@property (retain, nonatomic) UIImage *firstFrameImage;
@property (retain, nonatomic) UIImage *backgroundImage;
@property (retain, nonatomic) UIImage *storyImage;
@property (retain, nonatomic) NSString *canvasAnimatedInfoEffectId;
@property (retain, nonatomic) NSString *canvasAnimatedInfoEffectMD5;
@property (retain, nonatomic) UIImage *originAuthorIconImage;
@property (retain, nonatomic) UIImage *originVideoCoverImage;
@property (nonatomic) double duration;
@property (retain, nonatomic) NSString *lastPath;
@property (nonatomic) double videoPlayURLRequestTime;
@property (nonatomic) double videoWidth;
@property (nonatomic) double videoHeight;
@property (nonatomic) double videoFPS;
@property (nonatomic) double videoBitrate;
@property (retain, nonatomic) NSDictionary *downloaderTrackInfo;
@property (retain, nonatomic) NSURL *videoURL;
@property (retain, nonatomic) AWEResourceUploadParametersResponseModel *uploadParameters;
@property (nonatomic) double mainThreadPrepareSource;

- (void).cxx_destruct;

@end
