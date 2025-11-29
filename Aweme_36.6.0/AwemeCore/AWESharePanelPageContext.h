@class AWEShareContext, AWESharePanelBigFontAdapter, AWESharePanelCustomConfiguration;

@interface AWESharePanelPageContext : AWEIMComponentContext

@property (retain, nonatomic) AWESharePanelCustomConfiguration *configuration;
@property (retain, nonatomic) AWEShareContext *shareContext;
@property (nonatomic) unsigned long long displayType;
@property (retain, nonatomic) AWESharePanelBigFontAdapter *bigFontAdapter;
@property (nonatomic) BOOL contactListUseVerticalLayout;

- (void).cxx_destruct;

@end
