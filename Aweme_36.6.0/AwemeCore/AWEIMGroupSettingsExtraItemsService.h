@interface AWEIMGroupSettingsExtraItemsService : HTSService <IESIMGroupSettingsExtraItemsServiceProtocol>

- (BOOL)isShowOnProfileForCon:(id)a0;
- (void)updateShowOnProfileWithCon:(id)a0 showOnProfile:(BOOL)a1 completion:(id /* block */)a2;
- (id)init;

@end
