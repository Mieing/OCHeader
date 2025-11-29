@class NSString;

@interface IESIMEnvConfigService : HTSService <IESIMEnvConfigService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (double)appStartTimestamp;
- (id)imSDKDefaultAccess;
- (id)imSDKDefaultBiz;
- (long long)serviceOfIMLcs;
- (long long)serviceOfIMThirdPratyLcs;
- (id)customHeaderOfLcsConfig;
- (id)extraParamsOfRequestHeader;
- (id)extraCustomParamsOfLcsConfig;
- (id)frontierURLListWithTNCURLList:(id)a0;
- (id)customIMServerURL;
- (BOOL)supportLcsMultiInstance;
- (id)domain;

@end
