@class DelaySwitchSettingLogic, MMUILabel, NSString;

@interface SettingTranslateLanguagePreViewController : MMStackViewController <MMNavBarInteractiveDelegate> {
    BOOL m_isAutoTranslateAllSessionsOldValue;
}

@property (retain, nonatomic) MMUILabel *descLabel;
@property (retain, nonatomic) DelaySwitchSettingLogic *delaySwitchLogic;
@property (copy, nonatomic) id /* block */ onAutoTranslateSessionChange;
@property (nonatomic) BOOL shouldHighlightAutoTranslateItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (void)viewWillBePresented:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void)viewDidBePopedOrDismissed:(BOOL)a0;
- (void)registerYReportSdk;
- (void)initView;
- (void)initInteractiveNavi;
- (id)genHeaderView;
- (id)genFooterView:(id)a0;
- (id)genCell;
- (id)genAutoTranslateCell;
- (id)normalTintColor;
- (BOOL)isSetNormalToBlackStyle;
- (void)onCloseButtonClicked;
- (void).cxx_destruct;

@end
