@class NSString, UITextField, IESLiveGuideLayerContainerView, IESLiveGuideContainerContext;

@interface IESLiveGuideContainerModule : IESLiveGuideExecutionBaseModule <UITextFieldDelegate, IESLiveVRSwitchRouter>

@property (retain, nonatomic) IESLiveGuideContainerContext *containerContext;
@property (retain, nonatomic) IESLiveGuideLayerContainerView *guideLayerContainerView;
@property (nonatomic) unsigned long long initialLiveType;
@property (copy, nonatomic) id /* block */ backBlock;
@property (copy, nonatomic) id /* block */ dismissBlock;
@property (retain, nonatomic) UITextField *textField;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setEnableBack:(BOOL)a0;
- (void)switchVRLiveMode:(BOOL)a0;
- (void)subscribeExecutionMessage;
- (void)initialize:(id)a0 params:(id)a1;
- (void)closeGuideVC;
- (void)firstFrameDidStartLoad;
- (void)handleWillStartLive;
- (void)buildDisableScreenshotView;
- (void)buildContentView;
- (void)_keyboardHide;
- (void)handleMessage:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (BOOL)textFieldShouldBeginEditing:(id)a0;
- (void)dealloc;

@end
