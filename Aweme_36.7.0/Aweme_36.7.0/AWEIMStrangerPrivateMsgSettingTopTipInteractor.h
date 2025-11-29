@class AWEIMStrangerTabBannerView;

@interface AWEIMStrangerPrivateMsgSettingTopTipInteractor : AWEIMStrangerCommonTopTipViewInteractor

@property (retain, nonatomic) AWEIMStrangerTabBannerView *tipView;
@property (copy, nonatomic) id /* block */ tipViewClickBlock;
@property (nonatomic) long long whoCanMessageValue;

- (id)shouldContinueForPriorityObject:(id)a0;
- (id)shouldRemoveForPriorityObject:(id)a0;
- (void)p_didClickTip;
- (void)showTopTipView;
- (void)updateTipView;
- (void).cxx_destruct;

@end
