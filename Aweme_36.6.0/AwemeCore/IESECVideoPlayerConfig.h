@class NSString, NSArray, UIImage, IESECHeadVideoExtraInfoHeadVideoModel, NSNumber, NSDictionary;

@interface IESECVideoPlayerConfig : NSObject

@property (copy, nonatomic) NSString *videoID;
@property (copy, nonatomic) NSString *apiStr;
@property (nonatomic) BOOL useV2Play;
@property (copy, nonatomic) NSString *playURL;
@property (copy, nonatomic) NSArray *playURLs;
@property (copy, nonatomic) NSString *coverImageURL;
@property (nonatomic) struct CGSize { double width; double height; } videoSize;
@property (nonatomic) long long startTime;
@property (copy, nonatomic) NSArray *coverImageURLArray;
@property (nonatomic) long long maxCacheDuration;
@property (retain, nonatomic) UIImage *placeholderImage;
@property (nonatomic) BOOL hideProgressSlider;
@property (nonatomic) BOOL hideVolumeIcon;
@property (nonatomic) BOOL hidePlayButton;
@property (nonatomic) BOOL repeated;
@property (nonatomic) BOOL canRePlay;
@property (retain, nonatomic) UIImage *localVideoCoverImage;
@property (retain, nonatomic) NSString *localVideoFileURL;
@property (nonatomic) BOOL mute;
@property (retain, nonatomic) NSNumber *samplingRate;
@property (copy, nonatomic) NSString *speakerImage;
@property (copy, nonatomic) NSString *muteSpeakerImage;
@property (nonatomic) double speakerBottomOffset;
@property (nonatomic) struct CGSize { double width; double height; } speakerSize;
@property (copy, nonatomic) NSString *speakerBackgroundColor;
@property (nonatomic) double playerUserContainerHeight;
@property (nonatomic) BOOL afterLoad;
@property (nonatomic) BOOL playWithoutPlayback;
@property (nonatomic) BOOL enableOptimizeUI;
@property (nonatomic) BOOL pdpEnableVideoCollection;
@property (nonatomic) BOOL hasFirstPlay;
@property (nonatomic) long long videoPosition;
@property (copy, nonatomic) NSString *enterSource;
@property (copy, nonatomic) NSString *playerTag;
@property (copy, nonatomic) NSString *playerSubTag;
@property (nonatomic) BOOL needCookie;
@property (copy, nonatomic) IESECHeadVideoExtraInfoHeadVideoModel *videoExtraInfo;
@property (nonatomic) BOOL enableAwemePlayer;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSDictionary *awemeVideoModelDict;
@property (nonatomic) double loopStartTime;
@property (nonatomic) double loopEndTime;
@property (nonatomic) unsigned long long videoScaleMode;
@property (nonatomic) BOOL pdpDidReadyForPreload;
@property (nonatomic) BOOL pdpDidReadyForNewEdition;

- (void).cxx_destruct;

@end
