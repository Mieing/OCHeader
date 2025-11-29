@class AWEProfileGuidePopoverHelper, NSString, UIAccessibilityElement;

@interface AWEProfileSearchExpPopoverAlert : AWEProfileGuidePopoverBaseAlert <AWEProfileGuidePopoverHelperDelegate>

@property (weak, nonatomic) UIAccessibilityElement *element;
@property (retain, nonatomic) AWEProfileGuidePopoverHelper *popoverHelper;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEUserProfileModuleServiceDOUYINHTSAdaperClass;
+ (id)showPopKey:(BOOL)a0;
+ (id)showPopContent:(BOOL)a0;
+ (id)sharedInstance;

- (void)popoverHelperDidInvokeOnclose:(id)a0;
- (id)aAWEUserProfileModuleServiceDOUYINHTSAdaper;
- (void)clickSearchBtnWith:(BOOL)a0;
- (BOOL)shouldShowPopUserHome:(BOOL)a0;
- (void)tryShowPopover:(id)a0 showPopUserHome:(BOOL)a1 viewController:(id)a2 popoverShowedBlock:(id /* block */)a3;
- (void).cxx_destruct;

@end
