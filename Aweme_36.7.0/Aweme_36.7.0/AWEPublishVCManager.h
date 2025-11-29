@interface AWEPublishVCManager : NSObject

+ (id)templateButton;
+ (id)buttonPublishForPublishModel:(id)a0;
+ (id)switchInputButton;
+ (id)inputTableViewCell;
+ (id)publishToTableViewCell;
+ (id)publishButtonForNaviForPublishModel:(id)a0;
+ (id)privateTableViewCell;
+ (id)buttonPublishFriendsDailyForPublishModel:(id)a0;
+ (id)hashtagButton;
+ (id)atButton;
+ (id)switchInputLongTextButton;
+ (id)p_hashtagButtonForCommonSetting;
+ (id)p_templateButtonForCommonSetting;
+ (void)updatePublishButton:(id)a0 withModel:(id)a1;
+ (Class)aAWEPublishVCManagerCommonAdapterClass;
+ (id)switchInputLongTextButtonNoteStyle;
+ (id)buttonDraft;
+ (void)startLoadingWithLoadingImage:(id)a0 loadingTitle:(id)a1 button:(id)a2;
+ (void)endLoadingWithButtonTitle:(id)a0 button:(id)a1;
+ (id)finishButtonForNavi;
+ (id)draftButtonForNavi;
+ (id)titleInputTextTemplateLabel:(id)a0;
+ (id)titleInputCloseKeyboardButton;
+ (id)textTemplateViewKeyboardButton;
+ (id)saveButton;
+ (id)messageButton;
+ (id)shareButton;

- (id)aAWEPublishVCManagerCommonAdapter;

@end
