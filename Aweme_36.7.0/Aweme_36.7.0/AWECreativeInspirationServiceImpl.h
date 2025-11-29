@class NSString, AWERecordInspirationServiceImpl;

@interface AWECreativeInspirationServiceImpl : NSObject <AWECreativeInspirationServiceProtocol>

@property (weak, nonatomic) AWERecordInspirationServiceImpl *inspirationService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)enterInspirationFeedWithDataProvider:(id)a0 publishModel:(id)a1;
- (void)enterOldTemplateFeedWithDataProvider:(id)a0 publishModel:(id)a1;
- (void)inspirationCardFlowShootWithDetail:(id)a0 categoryItem:(id)a1 detailIndex:(long long)a2 clickEvent:(long long)a3;
- (void)inspirationFeedClickTakeFlowAweme:(id)a0 trackPassInfoDict:(id)a1;
- (void)inspirationFeedClickFriendLoraAweme:(id)a0 trackPassInfoDict:(id)a1;
- (void)onInspirationBottomKeyWordModifyButtonClick:(id)a0 trackPassInfoDict:(id)a1;
- (void)clearInspirationAndManagerCacheProfileModel:(long long)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;

@end
