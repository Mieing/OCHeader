@class NSString;

@interface AWEIMStrangerBlockMessageTopTipViewInteractor : AWEIMStrangerCommonTopTipViewInteractor <AWEIMTopNoticeTipInteractorProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)zeroOclockDateInLocalTimeZoneWithDate:(id)a0;
+ (id)topTipViewDismissTimeKey;
+ (void)shouldShowTopTipViewWithViewModel:(id)a0 completion:(id /* block */)a1;

- (id)shouldContinueForPriorityObject:(id)a0;
- (id)shouldRemoveForPriorityObject:(id)a0;
- (void)didClickTopTipViewActionBtnWithType:(long long)a0;
- (void)didClickTopTipViewCloseBtnWithType:(long long)a0;
- (id)tipAttributedText;
- (void)trackStrangerMessageBlockBarShow;
- (void)showTopTipView;
- (void)trackStrangerMessageBlockBarClickSetting;
- (void)trackStrangerMessageBlockBarClose;
- (id)init;

@end
