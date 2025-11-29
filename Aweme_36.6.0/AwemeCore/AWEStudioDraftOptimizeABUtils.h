@interface AWEStudioDraftOptimizeABUtils : NSObject

+ (BOOL)enableEditResourceValidation;
+ (BOOL)enableICloudExcludedIssueFix;
+ (BOOL)enableUnusedDraftCleanMasterSwitch;
+ (BOOL)enableUnusedDraftClean;
+ (BOOL)enableUnusedDraftResourceClean;
+ (BOOL)enableDraftCleanOptimize;
+ (BOOL)enableDraftLoadErrorCode40Optimize;
+ (BOOL)enableDraftLoadErrorClassMVOptimize;
+ (BOOL)enableMockResourceValidationFailure;
+ (BOOL)enableDraftDegree;
+ (BOOL)enablePopWhenResourceValidationFailed;
+ (BOOL)enableMockCorruptedDraft;
+ (BOOL)enableCalculateUnreferencedDraftSize;
+ (BOOL)enableValidateDraftNLEFile;
+ (double)draftResourceValidationTimeoutValue;
+ (BOOL)draftManagementShouldTrack;
+ (long long)draftManagementTrackSuffixMaxValue;
+ (long long)draftSaveTrackSuffixMaxValue;
+ (BOOL)enableDraftTrackValidation;
+ (BOOL)draftIdsIssueFixEnabled;
+ (long long)draftCleanRetentionSeconds;
+ (long long)draftCleanStrategy;
+ (long long)draftResourceCleanRetentionSeconds;
+ (long long)draftResourceCleanStrategy;
+ (long long)selectAlternatingDraftCleanType;
+ (long long)draftCleanLastAccessThresholdSeconds;
+ (long long)draftResourceCleanLastAccessThresholdSeconds;
+ (id)unusedDraftResourceDeleteList;
+ (long long)draftResourceCleanMaxCount;
+ (long long)tmpDirectoryCleanMaxCount;

@end
