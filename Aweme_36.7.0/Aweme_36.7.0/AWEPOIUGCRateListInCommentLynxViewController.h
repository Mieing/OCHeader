@class NSDictionary, NSString;
@protocol AWECommentGesProtocol;

@interface AWEPOIUGCRateListInCommentLynxViewController : AWEPOIUGCRateListViewController <AWEPOIUGCRateListInCommentViewControllerProtocol>

@property (nonatomic) BOOL didRequestData;
@property (nonatomic) BOOL commentPanelThemeIsLight;
@property (retain, nonatomic) NSDictionary *orginData;
@property (nonatomic) double lynxFmpTimeInterval;
@property (copy, nonatomic) NSDictionary *paramDict;
@property (weak, nonatomic) id<AWECommentGesProtocol> gesDelegate;
@property (nonatomic) double targetFrameHeight;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)aweui_emptyPageConfigForState:(unsigned long long)a0;
- (id)findViewWithName:(id)a0;
- (void)commentThemeChanged;
- (void)requestData:(long long)a0;
- (void)setupCommentGes;
- (id)lynxTemplateUrl;
- (id)pageSceneName;
- (void)routeToLynxUrlWithModel:(id)a0;
- (id)rateListRouteUrlWithParams:(id)a0;
- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;

@end
