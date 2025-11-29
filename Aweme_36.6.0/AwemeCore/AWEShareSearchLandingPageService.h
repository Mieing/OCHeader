@class NSString, AWEShareSearchLandingPageModel;

@interface AWEShareSearchLandingPageService : AWEShareCommonImpl <AWEShareSearchLandingPage>

@property (retain, nonatomic) AWEShareSearchLandingPageModel *searchLandingPageModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)shareContext;
- (id)lynxShareContext;
- (id)webShareContext;
- (id)lynxShareChannels;
- (id)webShareChannels;
- (id)insertShareTokenParamWithURL:(id)a0;
- (void)showPanelWithSearchLandingPageModel:(id)a0;
- (void).cxx_destruct;

@end
