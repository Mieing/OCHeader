@class NSString, ACCSpeedControlBottomPanelView, AWEVideoPublishViewModel;

@interface ACCSpeedControlPanelViewController : UIViewController <HTSVideoSpeedControlDelegate, ACCFullScreenPanelViewProtocol>

@property (retain, nonatomic) ACCSpeedControlBottomPanelView *speedControlContainerView;
@property (copy, nonatomic) id /* block */ backActionBlock;
@property (copy, nonatomic) id /* block */ didSelectSpeedBlock;
@property (nonatomic) double speed;
@property (retain, nonatomic) AWEVideoPublishViewModel *publishViewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void *)panelIdentifier;

- (double)panelViewHeight;
- (double)panelContentViewHeight;
- (void)speedControl:(id)a0 didSelectedIndex:(long long)a1 oldIndex:(long long)a2;
- (void)tapBackgroundAction:(id)a0;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void *)identifier;
- (id)panelName;

@end
