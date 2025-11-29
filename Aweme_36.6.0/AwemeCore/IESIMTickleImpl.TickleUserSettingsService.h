@interface IESIMTickleImpl.TickleUserSettingsService : HTSService <IESIMTickleUserSettingsService>

- (BOOL)enableShowTickleUserSettingsEntry;
- (id)currentTickleUserSettingsConfiguration;
- (id)attributeContentWithContent:(id)a0 attributes:(id)a1;
- (void)editTickleDetailWithParams:(id)a0 completion:(id /* block */)a1;
- (id)init;

@end
