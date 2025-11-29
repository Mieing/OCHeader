@class NSString, NSArray, NSDictionary, NSNumber;

@interface AWECloseFriendsPublishTaskParamModel : NSObject

@property (nonatomic) long long type;
@property (copy, nonatomic) NSString *videoPath;
@property (nonatomic) double canvasWidth;
@property (nonatomic) double canvasHeight;
@property (copy, nonatomic) NSString *filterID;
@property (nonatomic) unsigned long long nowPostType;
@property (nonatomic) BOOL isUpload;
@property (nonatomic) BOOL cfVersionForNewMoment;
@property (nonatomic) BOOL isMomentLivePhoto;
@property (retain, nonatomic) NSArray *imagePaths;
@property (retain, nonatomic) NSArray *originalImagePaths;
@property (nonatomic) BOOL isFriendVisible;
@property (copy, nonatomic) NSString *momentText;
@property (copy, nonatomic) NSString *audioAverageWaveArrString;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *enterMethod;
@property (copy, nonatomic) NSString *shootWay;
@property (copy, nonatomic) NSString *contentType;
@property (copy, nonatomic) NSString *contentSource;
@property (retain, nonatomic) NSNumber *activityVideoType;
@property (copy, nonatomic) NSString *activityExtraJson;
@property (copy, nonatomic) NSString *momentCameraFrameRatio;
@property (copy, nonatomic) NSString *beforePublishWatchMaskList;
@property (nonatomic) long long feedType;
@property (nonatomic) long long nowCaptureFrom;
@property (nonatomic) BOOL isBrushPainted;
@property (nonatomic) BOOL isShootToMomentCamera;
@property (nonatomic) BOOL isMomentStory;
@property (nonatomic) unsigned long long momentAssetsType;
@property (nonatomic) BOOL isHasTextSticker;
@property (nonatomic) BOOL shouldDisablePublishProgressView;
@property (retain, nonatomic) NSNumber *partOfVisibleStatus;
@property (retain, nonatomic) NSString *partOfVisibleUsersJSON;
@property (copy, nonatomic) NSArray *originalFramesArray;
@property (nonatomic) BOOL needUploadOriginalFrames;
@property (copy, nonatomic) NSString *framesTaskID;
@property (copy, nonatomic) NSString *imageText;
@property (copy, nonatomic) NSDictionary *closeFriendsTrackInfo;

- (void).cxx_destruct;

@end
