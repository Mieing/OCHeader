@class NSString;

@interface IESLivePropBindingAlarmAPIImpl : HTSLiveApi <IESLivePropBindingAlarmAPI>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)uploadPropBindingAlarmType:(unsigned long long)a0 giftId:(id)a1 propId:(id)a2 assetId:(id)a3 source:(long long)a4 propType:(long long)a5;

@end
