@class AWEDetailManager;

@interface AWEFeedTemplateAnchorOpenPlatformConfig : AWEFeedTemplateAnchorBaseConfig

@property (retain, nonatomic) AWEDetailManager *detailManager;

+ (BOOL)shouldShowAnchor:(id)a0;

- (void)anchorViewWillShowOnSuperview;
- (void)handlerTemplateAnchorViewClicked;
- (id)trackerParamsForTemplateAnchorShow;
- (id)trackerParamsForTemplateAnchorClick;
- (id)trackerCommonParamsForTemplateAnchor;
- (void)updateWithAwemeModel:(id)a0 needPerformOnDisplay:(BOOL)a1;
- (id)preferedURL;
- (id)openPlatformEventInfo;
- (id)preferedNewURL;
- (id)preferedName;
- (void).cxx_destruct;
- (id)templateID;
- (id)trackInfo;

@end
