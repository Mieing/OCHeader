@class IESLivePortraitShareCaptureWidget, HTSLiveToolbarItem, NSURL, NSString;

@interface IESLiveVSSnapShotFragment : IESLiveRoomComponent <IESLiveToolbarComponentHandler>

@property (retain, nonatomic) HTSLiveToolbarItem *snapShotItem;
@property (retain, nonatomic) NSURL *localScreenshotURL;
@property (retain, nonatomic) IESLivePortraitShareCaptureWidget *widget;
@property (nonatomic) BOOL hasTrackPortraitShow;
@property (nonatomic) double currentClickTime;
@property (nonatomic) double currentStartAnimTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)componentShouldActive:(id)a0;
+ (BOOL)isMixed;

- (void)trackEvent:(id)a0 params:(id)a1;
- (void)componentMount;
- (void)toolbarReceiveComponent:(id)a0 completion:(id /* block */)a1;
- (void)resetCaptureStatus;
- (id)iconViewWithImage:(id)a0;
- (void)snapShotButtonDidClick;
- (void)trackPortraitFirstShow;
- (BOOL)canShowTost;
- (void)trackFinishAnimation;
- (void)openSharePannel;
- (void)trackEventNoLivePrefix:(id)a0 params:(id)a1;
- (id)toolbar;
- (void).cxx_destruct;

@end
