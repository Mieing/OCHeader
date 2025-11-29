@class HTSLiveRoom, AWEAdChallengeCoverLinkModel, UIImageView, NSString, UIPanGestureRecognizer, UIViewController;
@protocol AWELiveAuienceViewControllerProtocol, AWEAdChallengeLiveDetailDelegate, IESLivePlayerProtocol;

@interface AWEAdChallengeLiveViewController : UIViewController <AWEAdChallengeLiveViewController, UIGestureRecognizerDelegate, IESLivePlayerControllerDelegate, AWELiveAudienceDetailDelegate>

@property (retain, nonatomic) UIViewController *audienceVC;
@property (retain, nonatomic) UIImageView *coverImage;
@property (nonatomic) BOOL hasLoadFirstFrame;
@property (nonatomic) BOOL coverImageLoadSuccess;
@property (retain, nonatomic) id<IESLivePlayerProtocol> previewStreamPlayer;
@property (retain, nonatomic) id<AWELiveAuienceViewControllerProtocol> liveController;
@property (retain, nonatomic) HTSLiveRoom *roomModel;
@property (retain, nonatomic) AWEAdChallengeCoverLinkModel *coverLinkModel;
@property (retain, nonatomic) UIPanGestureRecognizer *pangesture;
@property (nonatomic) BOOL previewStreamPlayerStartLoad;
@property (weak, nonatomic) id<AWEAdChallengeLiveDetailDelegate> delegate;
@property (nonatomic) BOOL isLiveTransition;
@property (nonatomic) BOOL enableReplay;
@property (nonatomic) BOOL isEnterFullScreenLiveRoom;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)streamOrientation;
- (void)player:(id)a0 loadStateDidChange:(unsigned long long)a1;
- (id)liveModuleService;
- (void)startShowPreStream;
- (double)viewVisibleHeight;
- (id)initWithCoverLinkData:(id)a0;
- (void)startShowPreViewStreamPlayer;
- (void)enterLiveRoom;
- (void)resetPreviewStreamPlayer;
- (void)willQuitAllRoom;
- (void)leaveRoom;
- (void).cxx_destruct;
- (BOOL)gestureRecognizer:(id)a0 shouldRequireFailureOfGestureRecognizer:(id)a1;
- (id)streamData;

@end
