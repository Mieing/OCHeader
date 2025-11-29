@class NSString, NSArray, NSDictionary, NSValue, NSError;
@protocol AWEStudioMusicModelProtocol, ACCChallengeModelProtocol;

@interface AWEStudioClipInputData : NSObject

@property (retain, nonatomic) NSString *taskId;
@property (readonly, copy, nonatomic) NSString *draftFolder;
@property (copy, nonatomic) NSString *createID;
@property (nonatomic) BOOL shouldCreateNewPublishModelInsteadOfCopy;
@property (retain, nonatomic) id<AWEStudioMusicModelProtocol> defaultMusic;
@property (retain, nonatomic) NSArray *musicList;
@property (retain, nonatomic) id<ACCChallengeModelProtocol> challenge;
@property (copy, nonatomic) NSArray *propBindMusicIDArray;
@property (retain, nonatomic) NSDictionary *referExtra;
@property (nonatomic) double maxClipDuration;
@property (retain, nonatomic) NSValue *transform;
@property (retain, nonatomic) NSArray *sourceAssetArray;
@property (retain, nonatomic) NSArray *subTrackSourceAssetArray;
@property (nonatomic) BOOL enableMultiTrack;
@property (nonatomic) unsigned long long imageAlbumLivePhotoMode;
@property (nonatomic) BOOL allowAIMode;
@property (retain, nonatomic) NSError *initialError;
@property (retain, nonatomic) NSString *clipedResultSavePath;
@property (nonatomic) BOOL forbidFastImport;
@property (nonatomic) BOOL isBGVideoStikerMode;
@property (nonatomic) BOOL hideSpeedControl;
@property (nonatomic) long long videoSource;
@property (nonatomic) long long videoType;
@property (nonatomic) long long feedType;
@property (nonatomic) BOOL isMultiLivePhoto;
@property (nonatomic) struct CGSize { double width; double height; } croppingSize;
@property (readonly, nonatomic) long long photosCount;
@property (readonly, nonatomic) long long videosCount;
@property (readonly, nonatomic) unsigned long long clipSourceType;
@property (copy, nonatomic) NSValue *gestureInvalidFrameValue;
@property (nonatomic) BOOL disableBackToTabBar;
@property (nonatomic) BOOL isStoryMode_deprecated_old2;
@property (nonatomic) BOOL isDraft;
@property (copy, nonatomic) NSString *thirdAppKey;
@property (nonatomic) BOOL isFromShareExtension;
@property (nonatomic) BOOL isFromLv;
@property (copy, nonatomic) id /* block */ cancelBlock;
@property (copy, nonatomic) id /* block */ studioClipCompletion;

+ (BOOL)isFromLVProductWithAppKey:(id)a0;

- (id)initWithTaskId:(id)a0;
- (BOOL)p_videoFromLVProduct:(id)a0;
- (id)p_getPublishModelReferString;
- (void).cxx_destruct;
- (id)init;

@end
