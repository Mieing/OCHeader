@class NSArray, NSTimer, NSString, UILabel;

@interface AWEAwemePlayletWaterMarkView : UIStackView <AWEAwemePlayletWaterMarkViewProtocol>

@property (retain, nonatomic) UILabel *waterMarkLabelView;
@property (retain, nonatomic) NSArray *singleDutyViews;
@property (retain, nonatomic) NSArray *pauseResumeRecorders;
@property (retain, nonatomic) NSTimer *showTimer;
@property (retain, nonatomic) NSTimer *dismissTimer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)p_pause;
- (void)p_resume;
- (void)showWithAwemeModel:(id)a0 renderFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)commentPanelShowAction:(id)a0;
- (void)beforeEnteringLandscapeFeedNotification;
- (void)afterExitingLandscapeFeedNotification;
- (id)findViewWithIdentify:(long long)a0;
- (void)p_decorationWithAwemeModel:(id)a0;
- (void)layoutWithAwemeModel:(id)a0 renderFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)p_showLogicWithAwemeModel:(id)a0;
- (id)findRecorderWithIdentify:(id)a0;
- (void)needHidden;
- (void)hiddenWithIdentify:(long long)a0;
- (void)showWithIdentify:(long long)a0;
- (void)pauseWithIdentify:(id)a0;
- (void)resumeWithIdentify:(id)a0;
- (void)needShow;
- (void).cxx_destruct;
- (id)init;
- (void)reset;
- (void)dealloc;

@end
