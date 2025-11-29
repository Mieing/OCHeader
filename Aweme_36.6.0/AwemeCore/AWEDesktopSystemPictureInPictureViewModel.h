@class BDUGFlowAuthToken, AWEDesktopSystemPopupGuideModel;

@interface AWEDesktopSystemPictureInPictureViewModel : NSObject

@property (retain, nonatomic) AWEDesktopSystemPopupGuideModel *guideModel;
@property (nonatomic) double pipShowTime;
@property (retain, nonatomic) BDUGFlowAuthToken *token;

- (void)trackPIPWindowEventWithType:(id)a0 ratio:(double)a1;
- (void)trackPIPShowAction;
- (void)trackMidGuideWithAction:(id)a0;
- (void)trackPIPStopActionWithPlayDuration:(double)a0 currentTime:(double)a1;
- (id)initWithGuideModel:(id)a0;
- (void)pipControllerDidStartPictureInPicture:(id)a0;
- (void)pipControllerWillStopPictureInPicture:(id)a0;
- (void)pipController:(id)a0 failedToStartPictureInPictureWithError:(id)a1;
- (void)minimalAppPerform;
- (void)pipControllerSetFreeWhenAppActive;
- (void).cxx_destruct;

@end
