@class NSString, NSArray;

@interface IESIMGroupImpl.GroupUpgradeForThousandDataComponent : AWEIMComponentBase <IESIMChatSettingsDataInterface> {
    void /* function */ navigationTitle;
    void /* function */ sectionModels;
    void /* unknown type, empty encoding */ lastRole;
    void /* unknown type, empty encoding */ lastGroupType;
    void /* unknown type, empty encoding */ validItemTypeList;
    void /* unknown type, empty encoding */ groupSettingService;
    void /* unknown type, empty encoding */ expUpgradeNumber;
}

@property (nonatomic, copy) NSString *navigationTitle;
@property (nonatomic, copy) NSArray *sectionModels;

- (void)componentDidMounted:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
