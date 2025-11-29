@class NSString, AVURLAsset, AVAsset;

@interface LVDraftVideoPayloadPackage : NSObject

@property (copy, nonatomic) NSString *resourceIdentifier;
@property (retain, nonatomic) AVURLAsset *video;
@property (retain, nonatomic) AVURLAsset *reversedVideo;
@property (retain, nonatomic) AVURLAsset *intensifiesVideo;
@property (retain, nonatomic) AVURLAsset *reverseIntensifiesVideo;
@property (retain, nonatomic) AVURLAsset *intensifiesAudio;
@property (retain, nonatomic) AVURLAsset *gameplayVideo;
@property (retain, nonatomic) AVAsset *photoAsset;
@property (copy, nonatomic) NSString *coverPath;
@property (copy, nonatomic) NSString *mediaImagePath;

- (void).cxx_destruct;

@end
