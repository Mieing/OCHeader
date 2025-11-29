@class NSString;

@interface IESLiveIMSettingServiceImpl : NSObject <AWEIMSettingModelUpdateMessage, IESLiveIMSettingListenerAction>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didUpdateIMSetting:(BOOL)a0 source:(id)a1 currentModel:(id)a2;
- (id)init;
- (void)dealloc;

@end
