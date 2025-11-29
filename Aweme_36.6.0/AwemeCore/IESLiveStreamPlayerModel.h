@class NSString, IESLivePlayerStoredResolutionKeyProvider, HTSLiveStreamUrl_LiveCoreSDKData_PullData_Options_Quality, NSArray, IESLivePlayerBizStainedTrackInfo, NSNumber;

@interface IESLiveStreamPlayerModel : NSObject

@property (retain, nonatomic) IESLivePlayerStoredResolutionKeyProvider *storedResolutionKeyProvider;
@property (retain, nonatomic) IESLivePlayerBizStainedTrackInfo *stainedTrackInfo;
@property (retain, nonatomic) NSString *streamData;
@property (retain, nonatomic) NSString *playerSDKKey;
@property (retain, nonatomic) HTSLiveStreamUrl_LiveCoreSDKData_PullData_Options_Quality *playerQuality;
@property (nonatomic) long long qualityType;
@property (retain, nonatomic) NSString *streamURLStr;
@property (retain, nonatomic) NSString *sdkParams;
@property (retain, nonatomic) NSNumber *roomID;
@property (nonatomic) long long streamVersion;
@property (nonatomic) long long roomScene;
@property (copy, nonatomic) NSString *anchorVersionStr;
@property (copy, nonatomic) NSString *anchorID;
@property (retain, nonatomic) NSNumber *anchorDevicePlatform;
@property (nonatomic) BOOL shouldHasViceView;
@property (nonatomic) long long layoutType;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } gameClip;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } cameraClip;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } cameraClipCustom;
@property (nonatomic) long long cameraVerticalType;
@property (nonatomic) BOOL isCameraHidden;
@property (nonatomic) BOOL isGameHidden;
@property (nonatomic) long long displayMode;
@property (retain, nonatomic) NSString *gameRoomId;
@property (retain, nonatomic) NSString *gameLiveDatats;
@property (copy, nonatomic) NSArray *qualityArray;
@property (nonatomic) BOOL vpassDefault;
@property (nonatomic) BOOL isVSRoom;
@property (nonatomic) BOOL isVRRoom;
@property (nonatomic) BOOL shouldShowViceView;
@property (nonatomic) BOOL isVSOrMediaMixRoom;
@property (nonatomic) BOOL isSubCamera;
@property (nonatomic) BOOL isGameRoomWithPublishPoint;

- (id)initWithAWEAwemeModel:(id)a0;
- (id)initWithRoomModel:(id)a0;
- (long long)transToRoomSceneWithRoom:(id)a0;
- (void)updateWithAWEAwemeModel:(id)a0;
- (void)updateWithRoomModel:(id)a0;
- (id)getPullData:(id)a0;
- (void)initModel:(id)a0 awemeModel:(id)a1;
- (id)getMainPullData:(id)a0;
- (void).cxx_destruct;

@end
