@class NSString;
@protocol IESLiveTimorService;

@interface IESLiveGuideInteractMiniAppFragment : IESLiveGuideComponent <IESLiveAnchorInteractPluginService>

@property (retain, nonatomic) id<IESLiveTimorService> timorService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)componentShouldActive:(id)a0;

- (void)componentBindService;
- (void)componentCreate;
- (void)componentMount;
- (BOOL)openInteractPluginSchema:(id)a0 item:(id)a1;
- (void)exitInteractPlugin;
- (id)getCurrentInUseInteractPlugin;
- (id)buildInteractPluginErrorCode:(long long)a0 errorNo:(long long)a1 errorType:(id)a2 errorMsg:(id)a3;
- (void).cxx_destruct;

@end
