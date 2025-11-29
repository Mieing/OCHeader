@class NSMutableDictionary, NSDictionary, NSString, NSLock;

@interface AWEUGDesktopChannelGuideStrategyManager : HTSService <AWEUGDesktopChannelGuideStrategyManagerProtocol>

@property (copy, nonatomic) NSDictionary *typeBusinessMap;
@property (retain, nonatomic) NSMutableDictionary *businessStrategiesList;
@property (retain, nonatomic) NSLock *lock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)injectSceneDesktopChannelGuideStrategy:(id)a0;
- (void)canShowDesktopChannelGuideWithModel:(id)a0 completion:(id /* block */)a1;
- (BOOL)canShowDesktopChannelGuideWithRequestModel:(id)a0;
- (void)preloadDesktopChannelGuideDataIfCanShowInXHourWithModel:(id)a0 completion:(id /* block */)a1;
- (void)requestGuideConfigWithModel:(id)a0 completion:(id /* block */)a1;
- (void)canShowDesktopChannelGuideWithRequestModel:(id)a0 completion:(id /* block */)a1;
- (void)injectEvadeStrategy:(id)a0;
- (void)showDesktopChannelGuideViewWithModel:(id)a0 needFrequencyControl:(BOOL)a1;
- (void)injectGuideInfoInstance:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
