@class NSString, NSArray, NSURL, UIImage, NSDictionary, AVURLAsset;
@protocol ACCMusicModelProtocol;

@interface AWEShareAsStoryParamsModel : NSObject

@property (retain, nonatomic) NSURL *videoURL;
@property (retain, nonatomic) UIImage *coverImage;
@property (copy, nonatomic) NSString *awemeId;
@property (copy, nonatomic) NSArray *awemeUrlList;
@property (copy, nonatomic) NSString *authorId;
@property (copy, nonatomic) NSString *authorSecId;
@property (copy, nonatomic) NSString *authorName;
@property (copy, nonatomic) NSDictionary *unmodifiablePublishParams;
@property (retain, nonatomic) id<ACCMusicModelProtocol> musicModel;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSDictionary *extraInfo;
@property (copy, nonatomic) NSDictionary *trackParams;
@property (copy, nonatomic) NSString *canvasAnimatedInfoEffectId;
@property (copy, nonatomic) NSString *canvasAnimatedInfoEffectMD5;
@property (copy, nonatomic) NSString *videoDescriptionString;
@property (copy, nonatomic) NSString *videoURI;
@property (copy, nonatomic) NSString *videoPlayURL;
@property (nonatomic) double videoPlayURLRequestTime;
@property (nonatomic) BOOL needSetToken;
@property (retain, nonatomic) AVURLAsset *videoAsset;
@property (nonatomic) double videoWidth;
@property (nonatomic) double videoHeight;
@property (nonatomic) double videoFPS;
@property (nonatomic) double videoBitrate;
@property (nonatomic) double duration;
@property (copy, nonatomic) NSDictionary *currentCanvasAnimatedInfo;
@property (copy, nonatomic) NSArray *canvasAnimatedInfo;
@property (nonatomic) BOOL isShareComment;
@property (nonatomic) BOOL isNewStyleShare;

- (void).cxx_destruct;

@end
