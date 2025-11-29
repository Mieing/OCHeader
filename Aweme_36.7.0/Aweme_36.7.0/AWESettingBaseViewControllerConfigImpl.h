@class AWESettingBaseViewController, NSString;

@interface AWESettingBaseViewControllerConfigImpl : NSObject <AWESettingBaseViewControllerBizAbilityProtocol>

@property (weak, nonatomic) AWESettingBaseViewController *weakObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)_aweLazyRegisterLoad;
+ (void)configInit;

- (double)settingSearchHighlightDelay;
- (void)findInvisibleItemWithItemID:(id)a0 needToast:(BOOL)a1;
- (id)profilePageBGColor;
- (id)settingADFeedbackLastShowtimeKey;
- (void).cxx_destruct;

@end
