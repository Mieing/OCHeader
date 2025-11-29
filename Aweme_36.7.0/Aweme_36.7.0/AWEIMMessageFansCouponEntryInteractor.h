@class AWEIMMessageBaseViewController, NSString, AWEIMFansCouponTopEntryView, UIView, NSDateFormatter;

@interface AWEIMMessageFansCouponEntryInteractor : AWEIMComponentBase <AWEIMMessageBaseVCLayoutAction, AWEIMInputVIewControllerAction, AWEIMMessageFansCouponEntryInteractorInterface>

@property (nonatomic) long long lastReadIndexForCouponCollect;
@property (retain, nonatomic) AWEIMFansCouponTopEntryView *topEntryView;
@property (readonly, nonatomic) AWEIMMessageBaseViewController *vcParent;
@property (readonly, nonatomic) UIView *view;
@property (nonatomic) BOOL hasShowTopEntry;
@property (nonatomic) long long entryState;
@property (copy, nonatomic) NSString *unavailableToast;
@property (retain, nonatomic) NSDateFormatter *dateFormatter;
@property (nonatomic) BOOL isupdateInputPanelEntryState;
@property (nonatomic) BOOL isFectchingData;
@property (nonatomic) long long topEntryCouponCount;
@property (nonatomic) BOOL hasResolved;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL showInFloatMode;
@property (copy, nonatomic) id /* block */ continueBlock;
@property (copy, nonatomic) id /* block */ removeBlock;
@property (nonatomic) BOOL invalid;
@property (nonatomic) unsigned long long priorityValue;

+ (BOOL)enableFansCouponTopEntryBySetting;
+ (BOOL)canCreateComponentWithContext:(id)a0;
+ (id)sharedInstance;

- (void)hideViewIfNeed;
- (void)showViewIfNeed;
- (id)shouldContinueForPriorityObject:(id)a0;
- (id)shouldRemoveForPriorityObject:(id)a0;
- (void)componentDidMounted:(id)a0;
- (void)inputViewTypeDidChange:(long long)a0 oldInputViewType:(long long)a1;
- (BOOL)enableFansCouponMessageBySetting;
- (BOOL)isTopEntryViewShowing;
- (void)updateInputPanelEntryState;
- (BOOL)enableInputPanelEntry;
- (BOOL)canShowCouponInputEntry;
- (BOOL)canShowCouponEntryInActionBar;
- (BOOL)enableFansCouponWithCon:(id)a0;
- (BOOL)canShowInputPanelEntryWithCon:(id)a0;
- (BOOL)tryShowFansCouponGuideBubbleWithCon:(id)a0 anchorView:(id)a1;
- (void)dismissTopEntryView;
- (void).cxx_destruct;

@end
