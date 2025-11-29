@class NSString, AWEDesktopSystemPopupGuideModel;
@protocol AWEIMMessageTabPopupViewInterface;

@interface AWEIMMessageTabDesktopChannelGuideComponent : AWEIMComponentBase <AWEIMMessageTabPopupViewProtocol, AWEUGDesktopChannelGuideMessage, DUXSheetDelegate>

@property (retain, nonatomic) AWEDesktopSystemPopupGuideModel *halfScreenAlertModel;
@property (nonatomic) BOOL isShowing;
@property (copy, nonatomic) id /* block */ onClose;
@property (weak, nonatomic) id<AWEIMMessageTabPopupViewInterface> messageTabPopupViewInterface;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)alertIDForEvent:(id)a0;
- (long long)alertPriorityForEvent:(id)a0;
- (BOOL)canShowWithContext:(id)a0;
- (BOOL)shouldCancelAllOtherPendingAlertsWhenShowedWithContext:(id)a0;
- (void)showWithCloseCallback:(id /* block */)a0;
- (void)showDesktopChannelGuide:(id)a0 config:(id)a1 guideType:(id)a2;
- (void)afterInitialComponentAllResolved:(id)a0;
- (BOOL)isDisplayingCurrentPopupView;
- (BOOL)canShowPopupView;
- (void)showPopupView;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
