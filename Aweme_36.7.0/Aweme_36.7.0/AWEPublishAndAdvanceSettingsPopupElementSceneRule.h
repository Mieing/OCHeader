@class NSString, AWEPublishAndAdvanceSettingsPopupSceneItemConfig;

@interface AWEPublishAndAdvanceSettingsPopupElementSceneRule : MTLModel <MTLJSONSerializing>

@property (readonly, nonatomic) NSString *type;
@property (nonatomic) BOOL enable;
@property (nonatomic) long long defaultScenceOfDisable;
@property (nonatomic) long long defaultScenceOfEnable;
@property (readonly, nonatomic) AWEPublishAndAdvanceSettingsPopupSceneItemConfig *itemConfig;
@property (nonatomic) BOOL disableInEditPage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)itemConfigDictWithType:(id)a0;
- (void).cxx_destruct;
- (id)initWithType:(id)a0;

@end
