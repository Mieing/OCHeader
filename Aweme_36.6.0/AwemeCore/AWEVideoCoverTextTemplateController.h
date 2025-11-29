@class UILabel, NSDictionary;

@interface AWEVideoCoverTextTemplateController : AWETextTemplateController

@property (nonatomic) BOOL isHistory;
@property (retain, nonatomic) UILabel *historyEmptyLabel;
@property (copy, nonatomic) NSDictionary *userSetting;
@property (copy, nonatomic) id /* block */ userSettingDidFinishFetch;

- (void)cancelSelect;
- (id)initWithPanelName:(id)a0 UIConfig:(id)a1 currentSticker:(id)a2 publishmodel:(id)a3 scene:(long long)a4;
- (void)setStickDownloadInfo:(id)a0;
- (id)createPanelViewWith:(id)a0 publishmodel:(id)a1;
- (id)createModelWithPanelName:(id)a0 currentSticker:(id)a1 currentChildSticker:(id)a2;
- (BOOL)disableDeSelect;
- (void)pickerViewDidSelectSticker:(id)a0 category:(id)a1 isAutoApply:(BOOL)a2;
- (void)stickerPickerModelDidFinishLoadCategories:(id)a0;
- (void)selectWithEffectModel:(id)a0;
- (void).cxx_destruct;

@end
