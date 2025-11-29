@class HTSEventContext, UIImage, IESLiveComponentContext;
@protocol IESLiveRoomService, IESLiveAudienceScreenshotReaction;

@interface IESLiveAudienceScreenshotStore : NSObject <IESLiveScreenshotService>

@property (retain, nonatomic) id<IESLiveRoomService> room;
@property (retain, nonatomic) HTSEventContext *trackContext;
@property (retain, nonatomic) IESLiveComponentContext *componentContext;
@property (nonatomic) BOOL hasTakeScreenShot;
@property (nonatomic) BOOL pauseScreenShot;
@property (nonatomic) BOOL fixScreenshot;
@property (weak, nonatomic) id<IESLiveAudienceScreenshotReaction> reaction;
@property (nonatomic) BOOL isLandscape;
@property (retain, nonatomic) UIImage *screenshotImage;

- (void)didSetAttachingDIContext;
- (void)trackPanelShow;
- (id)getCurrentScreenshotImageNeedCleanData:(BOOL)a0;
- (id)initWithRoom:(id)a0 trackContext:(id)a1 componentContext:(id)a2;
- (BOOL)panelNewStyle;
- (BOOL)panelEnterAnimEnable;
- (long long)panelItemFirstEnterDelay;
- (long long)panelShowDelay;
- (void)trueSendToIM;
- (void)trackPanelShare:(BOOL)a0;
- (void)trackPictureSearch;
- (void)showReportUserController;
- (void)didResciveNotification;
- (BOOL)hasPhotoAuth;
- (void)takeScreenshotImage;
- (BOOL)enablePictureSearch;
- (id)pictureSearchIconTitle;
- (void)sendToIM;
- (void)shareRoom;
- (void)searchPicture;
- (void)searchWithCompletion:(id /* block */)a0;
- (void)reportRoom;
- (BOOL)enableShareWeixin;
- (void)trackPanelRecordShow;
- (void)trackPanelSerach:(BOOL)a0;
- (BOOL)panelColorMode;
- (long long)panelItemPicSearchPosition;
- (long long)panelItemEnterDuration;
- (long long)panelItemEnterInterval;
- (void)registerObserver;
- (void)unregisterObserver;
- (void).cxx_destruct;

@end
