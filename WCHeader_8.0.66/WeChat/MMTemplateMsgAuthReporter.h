@interface MMTemplateMsgAuthReporter : MMObject

+ (void)reportScopeCacheModifyInSettingPage:(id)a0;
+ (void)reportAlertViewInTemplateMsgBottom:(id)a0 forUser:(id)a1;
+ (unsigned int)getContactTypeForUserName:(id)a0;
+ (id)genKVUidInBrandChatPage:(id)a0;
+ (void)reportPopUpInBrandChatPage:(id)a0 msgContentByUrlEncoded:(id)a1;
+ (void)reportAlertViewInBrandChatPage:(id)a0 msgContentByUrlEncoded:(id)a1;
+ (void)reportToastInBrandChatPage:(id)a0 msgContentByUrlEncoded:(id)a1;
+ (void)reportGoToSettingPageInBrandChatPage:(id)a0 msgContentByUrlEncoded:(id)a1;

@end
