@class NSString, HTSLiveImage, PrivilegeInfo, HTSLiveCameraPaidInfo, HTSLiveRoomAuthStatus, HTSLiveStreamUrl, HTSLiveCameraMatchInfo, HTSLiveEpisodePreviewImage;

@interface HTSLiveVSCameraInfo : IESLivePBBaseMessage

@property (nonatomic, getter=isMain) BOOL main;
@property (retain, nonatomic) PrivilegeInfo *privilegeInfo;
@property (nonatomic) BOOL hasTrack;
@property (nonatomic) long long cameraId;
@property (copy, nonatomic) NSString *cameraIdStr;
@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) HTSLiveImage *cover;
@property (nonatomic) BOOL hasCover;
@property (retain, nonatomic) HTSLiveImage *coverVertical;
@property (nonatomic) BOOL hasCoverVertical;
@property (retain, nonatomic) HTSLiveStreamUrl *streamInfo;
@property (nonatomic) BOOL hasStreamInfo;
@property (nonatomic) long long startTime;
@property (nonatomic) long long endTime;
@property (nonatomic) int style;
@property (retain, nonatomic) HTSLiveRoomAuthStatus *cameraRoomAuth;
@property (nonatomic) BOOL hasCameraRoomAuth;
@property (nonatomic) int vrType;
@property (retain, nonatomic) HTSLiveCameraPaidInfo *cameraPaidInfo;
@property (nonatomic) BOOL hasCameraPaidInfo;
@property (retain, nonatomic) HTSLiveCameraMatchInfo *cameraMatchInfo;
@property (nonatomic) BOOL hasCameraMatchInfo;
@property (nonatomic) long long groupId;
@property (nonatomic) int cameraType;
@property (retain, nonatomic) HTSLiveImage *label;
@property (nonatomic) BOOL hasLabel;
@property (nonatomic) long long pcu;
@property (nonatomic) BOOL isSubscribed;
@property (copy, nonatomic) NSString *groupIdStr;
@property (retain, nonatomic) HTSLiveEpisodePreviewImage *previewImage;
@property (nonatomic) BOOL hasPreviewImage;
@property (nonatomic) BOOL banSwitch;
@property (nonatomic) long long paidLiveType;

+ (id)descriptor;

- (id)defaultQuality;
- (BOOL)needShowPromisePromptInPayRoom;
- (id)rtmpPullURLParams;
- (BOOL)isUnpaidForVSPrivilegeCamera;
- (BOOL)isStreamVertical;
- (BOOL)isUnPaiedUserInPayCamera;
- (BOOL)unDeliveriedUserInPayCamera;
- (BOOL)isPaywallCamera;
- (BOOL)isVSPrivilegeCamera;
- (BOOL)useCommonTicketWithMainCamera;
- (BOOL)isPaiedUserInPayCamera;
- (BOOL)isWhiteListUserInPayCamera;
- (BOOL)deliveriedUserInPayCamera;
- (BOOL)hasViewRightForVSPrivilegeCamera;
- (id)streamData;

@end
