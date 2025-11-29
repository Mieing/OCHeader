@class NSString, IsShowSendCouponEntranceResponse;
@protocol IESLiveNativeAppPluginContext;

@interface IESLiveNativeAppCouponPlugin : NSObject <IESLiveNativeAppCouponPlugin, IESLiveNativeAppFragmentLifeCycle, IESLiveNativeAppPluginDataStreamHandler> {
    id<IESLiveNativeAppPluginContext> _pluginContext;
}

@property (retain, nonatomic) IsShowSendCouponEntranceResponse *couponInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)availableSceneTypes;

- (id)initWithDIContext:(id)a0 pluginContext:(id)a1;
- (void)pluginBindServices;
- (void)pluginDidCreate;
- (void)setupToolbarCouponItemHidden:(BOOL)a0;
- (void)requestCouponInfo:(id /* block */)a0;
- (id)currentCouponInfo;
- (void)openCouponLynxPage:(id /* block */)a0;
- (void)openCouponLynxPageWithInfo:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (id)pluginContext;

@end
