@class AWEShareSearchAIGCPanelView, NSString, UIView, UIPanGestureRecognizer, UITapGestureRecognizer;

@interface AWEShareSearchAIGCService : AWEShareCommonImpl <AWEShareSearchAIGC>

@property (weak, nonatomic) UIView *maskView;
@property (retain, nonatomic) UITapGestureRecognizer *tapGesture;
@property (retain, nonatomic) UIPanGestureRecognizer *panGesture;
@property (nonatomic) BOOL shouldShowPublishVideoButton;
@property (retain, nonatomic) AWEShareSearchAIGCPanelView *sharePanelView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEPadBizUIAdapterClass;
+ (Class)aAWESearchModuleServiceDOUYINSSAdaperClass;

- (id)aAWEPadBizUIAdapter;
- (id)aAWESearchModuleServiceDOUYINSSAdaper;
- (id)shareChannels;
- (BOOL)searchAIGCShareNewPanelSwitch;
- (id)shareContextWithEnterFrom:(id)a0;
- (void)setupMaskViewOnViewController:(id)a0;
- (void)sharePanelTapAction;
- (void)showPanelOnViewController:(id)a0 withSupplementaryView:(id)a1 showPublishVideoButton:(BOOL)a2 enterFrom:(id)a3 extraParams:(id)a4 searchIDsBlock:(id /* block */)a5 postVideoBlock:(id /* block */)a6;
- (void)updateSharePanelPublishButtonState:(BOOL)a0;
- (void)updateSharePanelSupplementaryViewHiddenState:(BOOL)a0;
- (void)addSharePanelSupplementaryView:(id)a0 animation:(BOOL)a1;
- (id)searchAIGCQRCodeViewControllerWithModel:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)handleDismiss;

@end
