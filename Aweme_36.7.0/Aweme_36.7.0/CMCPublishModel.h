@class AWEAwemeModel, NSString, AFDMomentCameraDraftModel, NSArray, NSDictionary, NSNumber, AFDMomentCameraContext;

@interface CMCPublishModel : NSObject

@property (retain, nonatomic) AFDMomentCameraDraftModel *draftModel;
@property (copy, nonatomic) NSString *publishID;
@property (nonatomic) double timeStamp;
@property (nonatomic) long long type;
@property (copy, nonatomic) NSString *imagePath;
@property (nonatomic) long long brushContentType;
@property (copy, nonatomic) NSArray *imagePathArray;
@property (readonly, copy, nonatomic) NSString *videoPath;
@property (nonatomic) double canvasWidth;
@property (nonatomic) double canvasHeight;
@property (copy, nonatomic) NSString *filterID;
@property (retain, nonatomic) AFDMomentCameraContext *cameraContext;
@property (copy, nonatomic) NSString *momentText;
@property (retain, nonatomic) NSString *audioAverageWaveArrString;
@property (nonatomic) double audioDuration;
@property (copy, nonatomic) NSString *originalImagePath;
@property (copy, nonatomic) NSString *coverImagePath;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *shootWay;
@property (copy, nonatomic) NSString *enterMethod;
@property (copy, nonatomic) NSString *shootEnterFrom;
@property (copy, nonatomic) NSString *maskShootWay;
@property (copy, nonatomic) NSString *contentType;
@property (copy, nonatomic) NSString *contentSource;
@property (copy, nonatomic) NSString *momentCameraFrameRatio;
@property (nonatomic) long long state;
@property (nonatomic) BOOL isShootToMomentCamera;
@property (nonatomic) BOOL isBrushPainted;
@property (nonatomic) BOOL isHasTextSticker;
@property (retain, nonatomic) NSNumber *partOfVisibleStatus;
@property (retain, nonatomic) NSNumber *privacyType;
@property (retain, nonatomic) NSString *partOfVisibleUsersJSON;
@property (retain, nonatomic) NSNumber *activityVideoType;
@property (copy, nonatomic) NSString *activityExtraJson;
@property (copy, nonatomic) NSDictionary *closeFriendsTrackInfo;
@property (copy, nonatomic) NSArray *originalFramesArray;
@property (nonatomic) BOOL needUploadOriginalFrames;
@property (copy, nonatomic) NSString *framesTaskID;
@property (copy, nonatomic) NSString *imageText;
@property (nonatomic) BOOL isFromDraft;
@property (nonatomic) BOOL isMomentLivePhoto;
@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (nonatomic) BOOL isMomentNewUserPublishedFirstWork;

- (unsigned long long)publishPartOfVisibleStatus;
- (void).cxx_destruct;

@end
