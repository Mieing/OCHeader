@interface AWEIMSwiftImpl.TickleUserSettingsService : HTSService <AWEIMTickleUserSettingsService> {
    void /* unknown type, empty encoding */ _tickleUserSettingsService;
}

- (BOOL)enableShowTickleUserSettingsEntry;
- (id)tickleUserSettingsEntryIcon;
- (id)tickleUserSettingsEntryTitle;
- (id)currentTickleUserSettingsConfiguration;
- (id)attributeContentWithContent:(id)a0 attributes:(id)a1;
- (void)editTickleDetailWithParams:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (id)init;

@end
