@class NSString, UIViewController;
@protocol AWEIMMessageTabPopupViewInterface;

@interface AWEIMMessageTabStorageCleanPromptPopupComponent : AWEIMComponentBase <AWEIMMessageTabPopupViewProtocol>

@property (weak, nonatomic) UIViewController *popup;
@property (nonatomic) BOOL hasPoppedupStorageCleanPromptPage;
@property (weak, nonatomic) id<AWEIMMessageTabPopupViewInterface> messageTabPopupViewInterface;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (id)alertIDForEvent:(id)a0;
- (long long)alertPriorityForEvent:(id)a0;
- (BOOL)canShowWithContext:(id)a0;
- (BOOL)shouldCancelAllOtherPendingAlertsWhenShowedWithContext:(id)a0;
- (void)showWithCloseCallback:(id /* block */)a0;
- (void)afterInitialComponentAllResolved:(id)a0;
- (BOOL)isDisplayingCurrentPopupView;
- (BOOL)canShowPopupView;
- (void)showPopupView;
- (void).cxx_destruct;

@end
