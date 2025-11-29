@class NSString, UIVisualEffectView, AWEIMInputVCUnhighlightedBadgeButton;

@interface IESIMInputSendComponent : AWEIMComponentBase <IESIMInputSendComponentInterface, UIGestureRecognizerDelegate>

@property (retain, nonatomic) UIVisualEffectView *sendBtnBlurView;
@property (retain, nonatomic) AWEIMInputVCUnhighlightedBadgeButton *sendBtn;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEIMModuleServiceHTSAdaperClass;
+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)sendBtnClicked:(id)a0;
- (void)componentDidMounted:(id)a0;
- (void)updateSendBtnIcon;
- (id)aAWEIMModuleServiceHTSAdaper;
- (id)getSendBtnIconImageName;
- (id)getSendBtnIconImage;
- (id)p_createSendBtnAttachmentView;
- (void)longPressGesRecognized:(id)a0;
- (void).cxx_destruct;
- (id)sendButton;

@end
