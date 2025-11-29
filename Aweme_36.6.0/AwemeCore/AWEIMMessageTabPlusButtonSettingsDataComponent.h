@class NSString;

@interface AWEIMMessageTabPlusButtonSettingsDataComponent : AWEIMComponentBase <AWEIMMessageTabPlusButtonSettingsDataInterface>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentDidMounted:(id)a0;
- (id)serviceChatModels;
- (BOOL)isPlusButtonShowInPlusListWithMenuType:(long long)a0;

@end
