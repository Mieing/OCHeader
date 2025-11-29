@class NSString, AWEAwemeModel;

@interface AWEHPTabGuideMediumVideoPlugin : NSObject <AWEHPTabGuidePluginProtocol>

@property (retain, nonatomic) AWEAwemeModel *lastShowAwemeModel;
@property (nonatomic) BOOL shouldPrepareLanding;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentDidShowWithInfo:(id)a0 context:(id)a1 container:(id)a2;
- (void)componentDidClickWithInfo:(id)a0 context:(id)a1 container:(id)a2;
- (id)customTrackParamsWithInfo:(id)a0 context:(id)a1;
- (id)customRouterParamsWithInfo:(id)a0 urlString:(id)a1 context:(id)a2;
- (id)buildFeatureParamsWithInfo:(id)a0 context:(id)a1;
- (BOOL)isUgClientFeatureEnable;
- (long long)currentVideoPlayDuration:(id)a0;
- (void).cxx_destruct;

@end
