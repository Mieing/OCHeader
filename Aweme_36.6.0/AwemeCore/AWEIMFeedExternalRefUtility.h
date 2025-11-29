@interface AWEIMFeedExternalRefUtility : NSObject

+ (id)minVersionConfigDict;
+ (BOOL)isFeedExternalRefMessage:(id)a0;
+ (id)itemIDForFeedExternalRefMessage:(id)a0;
+ (BOOL)shouldNotShowNaviTitleInDetailVCWithAweType:(long long)a0 sceneType:(unsigned long long)a1 refUid:(id)a2;
+ (id)externalRefUnavailableString:(id)a0;
+ (BOOL)shouldShowCommentLabelWithRefContent:(id)a0;
+ (BOOL)isCommentAvailable:(id)a0;
+ (BOOL)needFetchCommentStatusWithCommentID:(id)a0 sceneType:(unsigned long long)a1;
+ (BOOL)shouldShowBriefCommentLabel:(id)a0;
+ (id)commentLabelAttributedStringWithText:(id)a0 commentContentType:(long long)a1 shouldShowBriefCommentLabel:(BOOL)a2;
+ (BOOL)externalRefContentIsAvailable:(id)a0;
+ (struct CGSize { double x0; double x1; })getCoverSizeWithExternalRecContent:(id)a0;
+ (BOOL)needShowCloseFriendsFeedWithAweType:(long long)a0;
+ (struct CGSize { double x0; double x1; })getCoverSizeWithOriginalWidth:(long long)a0 originalHeight:(long long)a1 aweType:(long long)a2 outSceneType:(unsigned long long)a3 extra:(id)a4;
+ (BOOL)needShowCloseFriendsFeedWithAweType:(long long)a0 refType:(unsigned long long)a1;
+ (BOOL)shouldUseNowTypeOriginSizeWithAweType:(long long)a0 extra:(id)a1;
+ (BOOL)shouldMomentUseOriginSizeWithAweType:(long long)a0;
+ (BOOL)shouldShowCollapseMediaControllerWithSceneType:(unsigned long long)a0;

@end
