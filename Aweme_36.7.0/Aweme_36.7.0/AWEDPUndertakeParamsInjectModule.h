@class NSString, NSMutableDictionary;

@interface AWEDPUndertakeParamsInjectModule : NSObject <AWEHPChannelPluginControllerProtocol>

@property (retain, nonatomic) NSMutableDictionary *hpTabStayTimeParams;
@property (retain, nonatomic) NSMutableDictionary *playTimeParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)playTimeAspect;
+ (id)sharedInstance;

- (id)bottomChannel:(id)a0 getCustomTrackParamsWithTrackInfo:(id)a1;
- (id)channel:(id)a0 getCustomTrackParamsWithTrackInfo:(id)a1;
- (id)_getCustomTrackParamsWithTrackInfo:(id)a0;
- (id)_paramsForPlayTimeWithContext:(id)a0;
- (void)addParamsForHPTabStayTimeOnce:(id)a0 tabId:(id)a1;
- (void)addParamsForPlayTimeOnce:(id)a0 itemId:(id)a1;
- (void).cxx_destruct;

@end
