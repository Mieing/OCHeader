@class NSString, AFDPureModeConfiguration, AWEPageContext, AWEAwemeModel, NSDictionary, UIViewController;
@protocol AFDSpeedManagerProtocol, AFDProgressInteractionHotZoneManagerProtocol, AFDPureModePageEventTrackerProtocol, AFDPureModeCustomizableProtocol;

@interface AFDPureModePageContext : AWEPageContext

@property (nonatomic) long long playProgressThreshold;
@property (retain, nonatomic) AWEPageContext *containerContext;
@property (retain, nonatomic) AFDPureModeConfiguration *configuration;
@property (weak, nonatomic) UIViewController *feedContainer;
@property (weak, nonatomic) id<AFDPureModeCustomizableProtocol> customization;
@property (weak, nonatomic) id<AFDPureModePageEventTrackerProtocol> eventTracker;
@property (weak, nonatomic) id<AFDSpeedManagerProtocol> speedManager;
@property (weak, nonatomic) id<AFDProgressInteractionHotZoneManagerProtocol> progressInteractionHotZoneManager;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (retain, nonatomic) AWEAwemeModel *currentModel;
@property (retain, nonatomic) AWEAwemeModel *fromModel;
@property (copy, nonatomic) NSString *enterPipMethod;
@property (copy, nonatomic) NSString *referString;
@property (copy, nonatomic) NSString *enterFrom;
@property (retain, nonatomic) NSDictionary *logExtraDict;
@property (copy, nonatomic) NSString *commercePriorityType;
@property (nonatomic) BOOL isFromAlbumDetailPage;
@property (nonatomic) BOOL isFromFullScreenPlayer;
@property (nonatomic) BOOL canShowMultiMixVideo;
@property (nonatomic) BOOL hasShownPiP;
@property (nonatomic) BOOL isSupportPiP;
@property (nonatomic) BOOL isPiPActive;
@property (nonatomic) BOOL enableEnterPiP;
@property (copy, nonatomic) NSString *adEventName;
@property (nonatomic) BOOL isInAlbumPreview;
@property (nonatomic) BOOL isInScaleMode;
@property (nonatomic) BOOL needSetTargetContentOffset;
@property (nonatomic) BOOL isDisplaying;
@property (nonatomic) BOOL isHorizontalScrolling;
@property (nonatomic) long long currentPaginatedIndex;
@property (nonatomic) long long totalPaginatedCount;
@property (weak, nonatomic) UIViewController *pageContainerVC;

- (BOOL)pinchPiPEnable;
- (BOOL)canShowSpeedControlWithModel:(id)a0;
- (BOOL)isRichAwemeAvalibleForAweme:(id)a0;
- (id)getEnterFromTrackParams;
- (id)feedController;
- (void)setSpeedModeNextEnterMethod:(id)a0;
- (BOOL)isMultipleContent;
- (BOOL)isOnlyOneContent;
- (BOOL)isAlbumContent;
- (BOOL)isCloseFriendContent;
- (BOOL)checkIsSupportPiP:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
