@class NSString, NSArray;

@interface IESIMConversationSettingImpl.FormatSettingsDataComponent : AWEIMComponentBase <IESIMChatSettingsDataInterface> {
    void /* function */ navigationTitle;
    void /* unknown type, empty encoding */ $__lazy_storage_$_sectionModels;
    void /* unknown type, empty encoding */ lastRole;
}

@property (nonatomic, copy) NSString *navigationTitle;
@property (nonatomic, copy) NSArray *sectionModels;

- (void)componentDidMounted:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
