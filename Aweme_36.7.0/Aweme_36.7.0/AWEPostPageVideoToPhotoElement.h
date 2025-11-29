@class NSString;

@interface AWEPostPageVideoToPhotoElement : AWEPublishAndAdvanceSettingsPopupBaseCellElement <AWEPublishAndAdvanceSettingsPopupElementProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)_aweLazyRegisterPostPage;
+ (void)setupCustomSceneRule:(id)a0 context:(id)a1;
+ (id)type;

- (id)abConfig;
- (void)elementAppear;
- (id)advanceSettingsPopupItemConfig;
- (void)didSwitcherToggled:(BOOL)a0 completion:(id /* block */)a1;
- (void)trackClickVideoToPhoto;
- (BOOL)isVisible;
- (BOOL)isEnabled;

@end
