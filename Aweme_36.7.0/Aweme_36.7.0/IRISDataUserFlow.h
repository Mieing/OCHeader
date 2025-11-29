@class UIView, IRISDataModelContext, NSDictionary, IRISDataModelAction, IRISDataModelPage, NSMutableArray, IRISDataSnapshotUtil, NSMapTable;

@interface IRISDataUserFlow : NSObject {
    NSMutableArray *didAppearControllers;
    NSMutableArray *didDisappearControllers;
    BOOL flag_controllerAppearTriggered;
    BOOL isElementChanged;
    _Atomic unsigned int pageIndex;
    _Atomic unsigned int snapshotIndex;
}

@property (retain, nonatomic) NSMapTable *objectMapping;
@property (retain, nonatomic) IRISDataModelPage *recentPage;
@property (retain, nonatomic) IRISDataModelAction *recentAction;
@property (retain, nonatomic) NSDictionary *recentSnapshotInfo;
@property (retain, nonatomic) NSMutableArray *forwardPages;
@property (copy, nonatomic) id /* block */ updateNotifier;
@property (retain, nonatomic) IRISDataModelContext *context;
@property (weak, nonatomic) UIView *recentActualResponder;
@property (retain) IRISDataModelAction *strictAction;
@property (retain, nonatomic) IRISDataSnapshotUtil *snapshotUtil;
@property (readonly, nonatomic) NSDictionary *recentReferData;
@property (copy, nonatomic) id /* block */ logger;
@property (copy, nonatomic) id /* block */ onSnapshotTriggered;

- (void)onAppWillEnterForeground;
- (void)onAppDidEnterBackground;
- (void)leave:(id)a0;
- (void)trackUserBehavior:(id)a0 options:(id)a1;
- (void)trackResponder:(id)a0 userInfo:(id)a1;
- (void)untrackResponder:(id)a0;
- (id)strictReferData;
- (void)enterPageId:(id)a0 withParams:(id)a1 options:(id)a2;
- (void)checkCurrentMainPage:(id)a0;
- (BOOL)isBlockRecognizeAsPage:(id)a0;
- (void)enter:(id)a0 options:(id)a1;
- (void)_enterPage:(id)a0 withParams:(id)a1 options:(id)a2;
- (id)generatePageWithId:(id)a0 parameters:(id)a1 prev:(id)a2 options:(id)a3;
- (void)notifyUpdated:(id)a0;
- (void)trackAction:(id)a0;
- (id)referDataFromView:(id)a0 options:(id)a1;
- (void)checkPageStatusAfterControllerDidDisappear;
- (void)checkPageStatusAfterControllerDidAppear;
- (void)onTouchBegan:(id)a0;
- (void)onTouchEnded:(id)a0;
- (void)onDataReferUpdated:(id /* block */)a0;
- (void)controllerDidAppear:(id)a0;
- (void)controllerDidDisappear:(id)a0;
- (void).cxx_destruct;
- (id)initWithOptions:(id)a0;
- (void)start;

@end
