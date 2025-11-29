@class UIImageView, MMUnderlineTabsView, MMWechatEmotionsViewController, StoreEmotionHomePageViewController, NSMutableArray, MMPersonalEmotionsViewController;

@interface MMEmotionStoreViewController : MMUIViewController <EmoticonStoreMgrExt> {
    MMWechatEmotionsViewController *_wechatEmotionsViewController;
    StoreEmotionHomePageViewController *_homePageViewController;
    MMPersonalEmotionsViewController *_personalEmotionsViewContrller;
    UIImageView *_badgeView;
    unsigned int _scene;
    BOOL _isReport;
    int m_defaultSelectedTag;
}

@property (retain, nonatomic) MMUnderlineTabsView *sectionTab;
@property (retain, nonatomic) NSMutableArray *sectionItems;
@property (nonatomic) BOOL newHomePage;
@property (copy, nonatomic) id /* block */ onCanelModelViewBlock;
@property (nonatomic) unsigned long long searchScene;

- (id)init;
- (void)viewDidAppear:(BOOL)a0;
- (id)initWithEmotionScene:(unsigned int)a0 withRequestType:(unsigned int)a1;
- (id)initWithEmotionScene:(unsigned int)a0 AndDefaultTag:(int)a1;
- (void)initSearchScene;
- (void)viewDidLoad;
- (void)viewDidBePoped:(BOOL)a0;
- (void)viewDidBeDismissed:(BOOL)a0;
- (void)configViews;
- (BOOL)isNeedPersonalViewTab;
- (void)configViewControllers;
- (void)OnCancelModalView:(id)a0;
- (void)onOperate;
- (BOOL)isSupportEmojiPrivacySetting;
- (void)jumpNewPersonalCenterLiteApp;
- (void)configSections;
- (id)genTabItemWithTitle:(id)a0 isSelected:(BOOL)a1;
- (void)updateNew:(BOOL)a0;
- (void)longPressTab:(id)a0;
- (void)clickWechatEmotionsTab;
- (void)clickPersonalEmotionsTab;
- (void)replaceFromViewController:(id)a0 toViewController:(id)a1;
- (void)clickEmotionCharts;
- (void)OnEmoticonExptConfigChange:(unsigned long long)a0;
- (void)onTabsViewValueChanged:(id)a0;
- (void)registerYReportSdk;
- (void).cxx_destruct;

@end
