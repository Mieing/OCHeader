@class NSString;

@interface AWEPostPageStoryPermissionElement : AWEPublishAndAdvanceSettingsPopupBaseCellElement <AWEPublishAndAdvanceSettingsPopupElementProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)_aweLazyRegisterPostPage;
+ (void)setupCustomSceneRule:(id)a0 context:(id)a1;
+ (BOOL)canShowStoryPermission:(id)a0;
+ (id)type;

- (id)advanceSettingsPopupItemConfig;
- (void)didSelect;

@end
