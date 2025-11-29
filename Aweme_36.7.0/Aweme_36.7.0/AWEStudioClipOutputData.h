@class NSString, NSArray, UIImage, NSValue, NSMutableDictionary, NSMutableArray, NSObject, NSNumber, AVAsset;
@protocol ACCEditVideoDataProtocol, AWEStudioMusicModelProtocol, ACCMusicModelProtocol;

@interface AWEStudioClipOutputData : NSObject

@property (retain, nonatomic) NSString *taskId;
@property (retain, nonatomic) NSString *createId;
@property (retain, nonatomic) NSString *draftFolder;
@property (retain, nonatomic) NSString *uuid;
@property (retain, nonatomic) NSMutableArray *clipSourceInfos;
@property (retain, nonatomic) NSMutableDictionary *clipExtraDict;
@property (nonatomic) unsigned long long videoClipMode;
@property (nonatomic) BOOL isSpeedChange;
@property (nonatomic) BOOL isFastImportVideo;
@property (nonatomic) BOOL isMultiVideoUpload;
@property (nonatomic) BOOL disableBackToTabBar;
@property (nonatomic) BOOL isFaceuVideoFirst;
@property (retain, nonatomic) NSString *referString;
@property (retain, nonatomic) NSString *enterFrom;
@property (retain, nonatomic) NSNumber *originUploadVideoClipCount;
@property (retain, nonatomic) NSString *videoCode;
@property (retain, nonatomic) NSValue *sizeOfVideo;
@property (nonatomic) double exportTime;
@property (retain, nonatomic) NSMutableArray *sourceInfos;
@property (retain, nonatomic) NSMutableDictionary *referExtra;
@property (retain, nonatomic) NSMutableDictionary *extraDict;
@property (retain, nonatomic) AVAsset *bgmAsset;
@property (retain, nonatomic) id<AWEStudioMusicModelProtocol> music;
@property (readonly, nonatomic) id<ACCMusicModelProtocol> accMusic;
@property (nonatomic) long long feedType;
@property (nonatomic) BOOL isMultiLivePhoto;
@property (retain, nonatomic) NSNumber *originUploadPhotoCount;
@property (nonatomic) unsigned long long clipSourceType;
@property (nonatomic) long long videoSource;
@property (nonatomic) long long videoType;
@property (nonatomic) BOOL isStoryMode_deprecated_old3;
@property (retain, nonatomic) NSArray *sourceAssetModelArray;
@property (copy, nonatomic) NSString *musicEditedFrom;
@property (copy, nonatomic) NSValue *gestureInvalidFrameValue;
@property (nonatomic) BOOL isFromLv;
@property (retain, nonatomic) UIImage *coverImage;
@property (retain, nonatomic) NSObject<ACCEditVideoDataProtocol> *videoData;

- (id)initWithTaskId:(id)a0;
- (void).cxx_destruct;

@end
