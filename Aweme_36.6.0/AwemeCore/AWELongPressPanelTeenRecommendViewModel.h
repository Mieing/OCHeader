@class MMKV, UIView;

@interface AWELongPressPanelTeenRecommendViewModel : AWELongPressPanelBaseViewModel

@property (retain, nonatomic) MMKV *mmkv;
@property (weak, nonatomic) UIView *popoverTarget;

+ (id)longPressPanelViewModel;

- (void)showPopoverIfNeeded;
- (void)configVM;
- (void)toastWithText:(id)a0;
- (void)reportSuccessCompletion;
- (BOOL)needShow;
- (void).cxx_destruct;
- (id)init;

@end
