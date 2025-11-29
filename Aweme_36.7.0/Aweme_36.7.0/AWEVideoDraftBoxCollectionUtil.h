@interface AWEVideoDraftBoxCollectionUtil : NSObject

+ (void)uploadDrafts:(id)a0 container:(id)a1 completion:(id /* block */)a2;
+ (void)alertFeedbackWithCallback:(id /* block */)a0;
+ (BOOL)draftBoxCacheCleanTipsOptimize;
+ (long long)draftBoxCacheCleanTipsOptimizeMaxDeviceSizeGB;
+ (long long)draftBoxCacheCleanTipsShowCount;
+ (long long)draftBoxCacheCleanTipsOptimizeMinDraftSizeMB;
+ (BOOL)draftBoxCacheSensitiveUserTips;
+ (long long)draftBoxCacheSensitiveUserTipsMinDraftSizeMB;
+ (long long)draftBoxCacheCleanTipsCloseDays;
+ (long long)draftBoxCacheCleanTipsHideDays;
+ (id)getAWEColorWithColorName:(id)a0 vc:(id)a1;
+ (id)getACCColorWithColorName:(id)a0 vc:(id)a1;
+ (id)managerButtonTitleKey;
+ (void)handleDraftsSaveLocalSuccessAlertWithDrafts:(id)a0 selectedDraftSize:(id)a1 callback:(id /* block */)a2;
+ (id)selectedInProgressTaskDraftIdsWithDrafts:(id)a0;
+ (void)p_uploadMonitorWithDrafts:(id)a0 error:(id)a1;
+ (id)draftBoxPromptShowConfig;
+ (id)draftBoxPromptConfig1;
+ (id)draftBoxPromptConfig2;
+ (void)handleDeleteDraftsAlertWithDrafts:(id)a0 selectedDraftSize:(id)a1 callback:(id /* block */)a2;
+ (void)alertPartialDamagedWithCallback:(id /* block */)a0;
+ (long long)maxFeedbackCount;
+ (BOOL)feedbackEnabled;
+ (struct CGSize { double x0; double x1; })cellSize;
+ (double)cellSpacing;
+ (double)footerViewHeight;

@end
