@interface ACCAIGCUGCFusionCreationToolsTracker : NSObject

+ (void)trackToolsAigcCorePreAIProcessAllWithStartTime:(double)a0 stepName:(unsigned long long)a1 error:(id)a2 imageCount:(long long)a3;
+ (void)trackToolsAigcCorePreAIProcessAllWithStartTime:(double)a0 stepName:(unsigned long long)a1 error:(id)a2;
+ (id)statusTextWithType:(unsigned long long)a0;
+ (id)enterAlbumPageAIEntranceWithType:(unsigned long long)a0;
+ (void)trackAIGCInspirationCardWithType:(unsigned long long)a0 publishViewModel:(id)a1 index:(long long)a2 model:(id)a3;
+ (void)trackCreateRoleMaterialShowWithType:(unsigned long long)a0 isLora:(BOOL)a1 index:(long long)a2 publishViewModel:(id)a3;
+ (void)trackChangeAIGCGenerateTypeWithFromStatus:(unsigned long long)a0 toStatus:(unsigned long long)a1 publishViewModel:(id)a2;
+ (void)trackAIGCImageReferenceClickWithPublishViewModel:(id)a0 fusionCreationToolsModel:(id)a1 isRetryTask:(BOOL)a2;
+ (void)trackAIGCImageReferenceUploadWithPublishViewModel:(id)a0 fusionCreationToolsModel:(id)a1 isRetryTask:(BOOL)a2;
+ (void)trackAIGCReferenceReplaceWithPublishViewModel:(id)a0 enterForm:(unsigned long long)a1 afterReferenceType:(unsigned long long)a2 afterReferenceDuration:(long long)a3 isRetryTask:(BOOL)a4;
+ (void)trackAIGCReferenceClickWithPublishViewModel:(id)a0 fusionCreationToolsModel:(id)a1 isVideoSupportShow:(BOOL)a2 isRetryTask:(BOOL)a3;
+ (void)trackAIGCMediaReferenceUploadWithPublishViewModel:(id)a0 fusionCreationToolsModel:(id)a1 exportResult:(id)a2 isReplace:(BOOL)a3 isRetryTask:(BOOL)a4;
+ (void)trackAIGCReferenceDeleteWithPublishViewModel:(id)a0 fusionCreationToolsModel:(id)a1 isRetryTask:(BOOL)a2;
+ (void)trackAIHelpWriteClickWithClickType:(unsigned long long)a0 publishViewModel:(id)a1 isLora:(BOOL)a2 isRetryTask:(BOOL)a3;
+ (id)shootWayWithPublishViewModel:(id)a0;
+ (id)editAIGCCreateWayWithPublishViewModel:(id)a0 isRetryTask:(BOOL)a1;
+ (id)aigcCreateWayWithPublishViewModel:(id)a0;
+ (id)stepNameTextWithType:(unsigned long long)a0;
+ (void)trackEnterCreationToolsPageWithPublishViewModel:(id)a0;
+ (void)trackCreateRoleChooseCardShowWithType:(unsigned long long)a0 closeType:(unsigned long long)a1 aigcRoleCnt:(long long)a2 albumPicCnt:(long long)a3 publishViewModel:(id)a4;
+ (void)trackCreateRoleAIWriteNoticeShowWithPublishViewModel:(id)a0;
+ (void)trackAIGCVideoReferenceChoosePageShowWithPublishViewModel:(id)a0 exportResult:(id)a1;
+ (void)trackAIGCVideoReferenceChooseFinishWithPublishViewModel:(id)a0 exportResult:(id)a1;
+ (unsigned long long)mediaTypeFromResourceType:(long long)a0;
+ (void)trackAIGCInspirationCoverNoticeWithType:(unsigned long long)a0 isChecked:(BOOL)a1 model:(id)a2 index:(long long)a3;
+ (void)trackAIGCEditGenerateButtonClickWithPublishViewModel:(id)a0 enterType:(unsigned long long)a1 isRetryTask:(BOOL)a2;

@end
