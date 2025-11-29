@interface RTVVoipWarningConfigManager : NSObject

+ (id)warningStrategyConfigDic;
+ (id)warningStrategyDicForStrategyKey:(id)a0;
+ (id)userRoleDescribeWithRole:(long long)a0;
+ (id)warningStrategyCodeDic;
+ (id)warningDialogStrategyDicForStrategyKey:(id)a0 role:(long long)a1;
+ (id)p_alertDialogCallerConfirmTitleForWarningStrategyKey:(id)a0 role:(long long)a1;
+ (id)p_alertDialogCalleeConfirmTitleForWarningStrategyKey:(id)a0 role:(long long)a1;
+ (id)p_alertDialogConfirmTitleForWarningStrategyKey:(id)a0 role:(long long)a1;
+ (id)warningBannerStrategyDicForStrategyKey:(id)a0 role:(long long)a1;
+ (id)onTheLivingWarningConfigDic;
+ (id)onTheGroupLiveGameWarningConfigDic;
+ (id)onTheGroupLiveChorusWarningConfigDic;
+ (id)onTheFormatLiveWarningConfigDic;
+ (id)onTheFormatVoiceChatWarningConfigDic;
+ (id)onTheVoipWarningConfigDic;
+ (id)onTheLivingWarningCallerConfigDic;
+ (id)onTheLivingWarningCalleeConfigDic;
+ (id)onTheVoipWarningCallerConfigDic;
+ (id)onTheVoipWarningCalleeConfigDic;
+ (id)onTheFormatLiveWarningCallerConfigDic;
+ (id)onTheFormatLiveWarningCalleeConfigDic;
+ (id)onTheFormatVoiceChatWarningCallerConfigDic;
+ (id)onTheFormatVoiceChatWarningCalleeConfigDic;
+ (id)onTheGroupLiveGameWarningCallerConfigDic;
+ (id)onTheGroupLiveGameWarningCalleeConfigDic;
+ (id)onTheGroupLiveChorusWarningCallerConfigDic;
+ (id)onTheGroupLiveChorusWarningCalleeConfigDic;
+ (id)getOnTheCallWarningConfigDicWithRole:(long long)a0 scene:(id)a1;
+ (unsigned long long)alertStrategyForWarningStrategyKey:(id)a0;
+ (id)priorityForWarningStrategyKey:(id)a0;
+ (id)warningStrategyKeyWithErrorCode:(id)a0;
+ (unsigned long long)warningBannerActionTypeForStrategyKey:(id)a0 role:(long long)a1;
+ (id)p_alertDialogImagePathForWarningStrategyKey:(id)a0 role:(long long)a1;
+ (id)alertDialogTitleForWarningStrategyKey:(id)a0 role:(long long)a1;
+ (id)alertDialogContentForWarningStrategyKey:(id)a0 role:(long long)a1;
+ (id)alertDialogConfirmTitleForWarningStrategyKey:(id)a0 role:(long long)a1;
+ (id)alertDialogRefuseTitleForWarningStrategyKey:(id)a0 role:(long long)a1;
+ (id)alertBarContentForWarningStrategyKey:(id)a0 role:(long long)a1;
+ (id)onTheCallCallerWarningTitleWithRoles:(long long)a0 scene:(id)a1;
+ (id)onTheCallCallerWarningBodyWithRoles:(long long)a0 scene:(id)a1;
+ (id)onTheCallCallerWarningConfirmTextWithRoles:(long long)a0 scene:(id)a1;
+ (id)onTheCallCallerWarningRefuseTexWithRoles:(long long)a0 scene:(id)a1;

@end
