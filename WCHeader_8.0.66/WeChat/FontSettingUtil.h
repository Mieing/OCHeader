@class MMTipsViewController, NSString;
@protocol FontSettingUtilDelegate;

@interface FontSettingUtil : NSObject <MMTipsViewControllerDelegate>

@property (retain, nonatomic) MMTipsViewController *fontSettingTipsView;
@property (weak, nonatomic) id<FontSettingUtilDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)canShowFontSettingTips;
- (void)showUserFontSettingTips;
- (void)checkFontSetting;
- (void)onClickTipsBtn:(id)a0 Index:(long long)a1;
- (void).cxx_destruct;

@end
