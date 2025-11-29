@class NSString, NSMapTable, NSMutableDictionary;

@interface AWEPublishSettingServiceImpl : NSObject <AWEPublishPrivacySettingSubscriber, AWEPublishSettingsServiceProtocol>

@property (retain, nonatomic) NSMapTable *dataControllerMap;
@property (retain, nonatomic) NSMapTable *privacySettingHandlerMap;
@property (retain, nonatomic) NSMutableDictionary *shortPathDataControllerDict;
@property (retain, nonatomic) NSMutableDictionary *shortPathPrivacySettingHandlerDict;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)getAndRegisterAdvanceSettingDataControllerWithPublishModel:(id)a0;
- (void)unregisterPrivacySettingHandlerAndDataControllerWithPublishModel:(id)a0;
- (void)unregisterAdvanceSettingDataControllerWithPublishModel:(id)a0;
- (void)configPrivacySettingHandlerAndDataControllerWithPublishModel:(id)a0;
- (id)getAndRegisterPrivacySettingHandlerWithPublishModel:(id)a0;
- (void)publishPrivacySettingHandler:(id)a0 didChangeWithInfo:(id)a1;
- (void)unregisterPrivacySettingHandlerWithPublishModel:(id)a0;
- (void).cxx_destruct;

@end
