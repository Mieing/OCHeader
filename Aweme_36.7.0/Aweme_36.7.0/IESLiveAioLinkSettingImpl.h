@class NSString;

@interface IESLiveAioLinkSettingImpl : NSObject <IESLiveAioLinkSetting>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)getClientSetting:(id)a0 key:(id)a1;
- (id)getClientSetting:(id)a0;

@end
