@class UIScreenEdgePanGestureRecognizer, NSString, WCFinderSlideTextForRemarkVCParams, SlideTextJSHandler, WSTemplateLogicController, UIButton, WSWebViewPluginScheduler, UILabel, WCFinderGuideLinkBubbleView;

@interface WCFinderSlideTextForRemarkViewController : MMUIHalfScreenViewController <WSWebViewPluginableProtocol, SlideTextDelegate>

@property (retain, nonatomic) UIButton *cancelButton;
@property (retain, nonatomic) UIButton *doneButton;
@property (retain, nonatomic) UILabel *topLabel;
@property (retain, nonatomic) WCFinderGuideLinkBubbleView *guideBubbleView;
@property (retain, nonatomic) WSTemplateLogicController *logicController;
@property (retain, nonatomic) SlideTextJSHandler *jsHandler;
@property (copy, nonatomic) NSString *content;
@property (copy, nonatomic) NSString *selectedText;
@property (nonatomic) long long maxCharLength;
@property (copy, nonatomic) NSString *guideIconUrl;
@property (copy, nonatomic) NSString *finishWording;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } selectedRange;
@property (copy, nonatomic) NSString *topTitle;
@property (retain, nonatomic) UIScreenEdgePanGestureRecognizer *popGesture;
@property (nonatomic) double guideBubbleMaxWidth;
@property (retain, nonatomic) WCFinderSlideTextForRemarkVCParams *params;
@property (copy, nonatomic) id /* block */ doneBlock;
@property (retain, nonatomic) WSWebViewPluginScheduler *pluginScheduler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithParams:(id)a0;
- (void)_baseInit;
- (double)getMaxHalfScreenHeight;
- (BOOL)useTransparentNavibar;
- (BOOL)useCustomNavibar;
- (void)initPlugin;
- (void)initLogicController;
- (void)viewDidLoad;
- (void)setupPopGes;
- (void)handlePopGesture:(id)a0;
- (void)initTopView;
- (void)initContentView;
- (void)viewDidLayoutSubviews;
- (void)onDone;
- (BOOL)DismissMyselfAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (void)onSelectedTextChanged:(id)a0;
- (void)updateGuideBubbleIconUrl:(id)a0 content:(id)a1;
- (id)getCurViewController;
- (id)getLocalJSLogic;
- (unsigned long long)localJSBizType;
- (void).cxx_destruct;

@end
