@class NSString;

@interface AWEECVideoJumpToMallPlugin : NSObject <AWEHPTabGuidePluginProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)jumpBtnInfoWithModel:(id)a0;
- (id)createJumpToMallTrackParamsWithMethod:(id)a0 context:(id)a1;
- (void)componentDidShowWithInfo:(id)a0 context:(id)a1 container:(id)a2;
- (void)componentDidClickWithInfo:(id)a0 context:(id)a1 container:(id)a2;
- (id)customRouterParamsWithInfo:(id)a0 urlString:(id)a1 context:(id)a2;

@end
