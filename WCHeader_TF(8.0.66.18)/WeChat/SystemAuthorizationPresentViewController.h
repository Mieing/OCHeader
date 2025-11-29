@class UIStackView, NSString, UIView, MMTableViewInfo, NSMutableArray;

@interface SystemAuthorizationPresentViewController : MMUIViewController <MMNavBarInteractiveDelegate> {
    MMTableViewInfo *m_tableViewInfo;
    NSMutableArray *m_authItems;
}

@property (retain, nonatomic) UIStackView *tableHeaderView;
@property (retain, nonatomic) UIStackView *tableFooterView;
@property (retain, nonatomic) UIView *emptyView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (id)navigationBarBackgroundColor;
- (BOOL)useBlackStatusbar;
- (void)initItems;
- (void)initInteractiveNavi;
- (void)reloadTableData;
- (void)onTapCell:(id)a0;
- (id)normalTintColor;
- (BOOL)isSetNormalToBlackStyle;
- (void)jumpToSystemPrivacySetting;
- (void).cxx_destruct;

@end
