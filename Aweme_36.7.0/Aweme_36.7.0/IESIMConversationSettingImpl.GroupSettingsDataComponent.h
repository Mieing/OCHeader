@class NSString, NSArray;

@interface IESIMConversationSettingImpl.GroupSettingsDataComponent : AWEIMComponentBase <IESIMChatSettingsDataInterface> {
    void /* function */ navigationTitle;
    void /* function */ sectionModels;
    void /* unknown type, empty encoding */ lastRole;
    void /* unknown type, empty encoding */ lastGroupType;
}

@property (nonatomic, copy) NSString *navigationTitle;
@property (nonatomic, copy) NSArray *sectionModels;

- (void)componentDidMounted:(id)a0;
- (BOOL)isAutoBigFontStyle;
- (void).cxx_destruct;
- (id)init;

@end
