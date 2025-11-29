@class AWEAdGeneralSearchLynxComponentMonitorContext, NSString, UIView;
@protocol AWEBDARifleView;

@interface AWEModernFeedAdSandwichVideoViewController : AWEModernFeedAwemeViewController <AWEBDARifleViewDelegate>

@property (retain, nonatomic) UIView<AWEBDARifleView> *topRifleView;
@property (retain, nonatomic) UIView<AWEBDARifleView> *bottomRifleView;
@property (retain, nonatomic) AWEAdGeneralSearchLynxComponentMonitorContext *topLynxTrackContext;
@property (retain, nonatomic) AWEAdGeneralSearchLynxComponentMonitorContext *bottomLynxTrackContext;
@property (nonatomic) BOOL isVideoDidBreak;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)modernFeedCellPreferedHeightForModel:(id)a0 width:(double)a1;
+ (void)__awe__codeRunnerRun___LINE__;

- (void)rifleView:(id)a0 didChangeIntrinsicContentSize:(struct CGSize { double x0; double x1; })a1;
- (void)rifleView:(id)a0 didFinishLoadWithURL:(id)a1;
- (void)rifleView:(id)a0 didLoadFailedWithURL:(id)a1 error:(id)a2;
- (void)rifleViewDidConstructJSRuntime:(id)a0;
- (void)didEndShowing;
- (void)didStartShowing;
- (void)updateSubviewFrames;
- (void)resetLynxView;
- (void)updateLynxViewWithAwemeModel:(id)a0;
- (id)createLynxMonitorContextWithLynxModel:(id)a0;
- (void)monitorWithContext:(id)a0 eventKey:(long long)a1;
- (void)notifyLynxDisappear;
- (void)lynxViewShowMonitorWithContext:(id)a0 lynxView:(id)a1;
- (id)topLynxViewComponentModelWithAweme:(id)a0;
- (id)bottomLynxViewComponentModelWithAweme:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)updateWithModel:(id)a0;
- (void)_setupUI;

@end
