@class NSString;

@interface AWEVideoPublishUtils : NSObject <AWEStudioPublishUtilsProtocol>

@property (copy, nonatomic) NSString *longitude;
@property (copy, nonatomic) NSString *latitude;
@property (nonatomic) BOOL useSequenceEditServiceWhenMerge;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEStudioDOUYINSSAdapterClass;
+ (long long)publishCaptionMaxLength;
+ (id)fileURLWithString:(id)a0;
+ (void)capcutCoverSyncWithPublishModel:(id)a0;
+ (struct CGSize { double x0; double x1; })coverSizeWithModel:(id)a0 editService:(id)a1;
+ (id)flowIdWithPublishModel:(id)a0;
+ (long long)titleMaxLengthWithPublishModel:(id)a0 scene:(id *)a1;
+ (id)findTargetViewController:(Class)a0 fromViewController:(id)a1 recursiveCount:(long long)a2;
+ (void)preFetchCacheLocationInfoIfNeeded;
+ (BOOL)should24StoryLandingToMeDailyTabWithTask:(id)a0;
+ (void)routeToMeDailyTab;
+ (struct CGSize { double x0; double x1; })slidesCoverSizeOfWorkspace:(id)a0 index:(long long)a1;
+ (struct CGSize { double x0; double x1; })albumCoverSizeWithModel:(id)a0 index:(long long)a1;
+ (id)titleForPreviewPage:(id)a0 isDoubleColumn:(BOOL)a1;
+ (void)automaticallyMentionUsersIfNeeded:(id)a0;
+ (long long)hashtagCountLimit;
+ (void)genPublishTitleIfNeedWithPublishModel:(id)a0 hashTags:(id)a1;
+ (struct CGSize { double x0; double x1; })slidesCoverSizeOfWorkspace:(id)a0;
+ (void)getFileInfoWithImageFilePaths:(id)a0 videoFilePaths:(id)a1 completeBlock:(id /* block */)a2;
+ (long long)publishMaxTitleLengthForFeedTypeWithModel:(id)a0 scene:(id *)a1;
+ (void)closeOtherEditOrPublishFlow:(id)a0 completion:(id /* block */)a1;
+ (void)routeFollowPageWithTask:(id)a0;
+ (BOOL)enableUseSequenceEditServiceWhenMerge;
+ (struct CGSize { double x0; double x1; })coverSizeWithPublishModel:(id)a0;
+ (long long)titleLineCountForPreviewPage:(id)a0 titleWidth:(double)a1 font:(id)a2 isDoubleColumn:(BOOL)a3;
+ (BOOL)enableTitleExpandWithTextView:(id)a0;
+ (id)validJSONCharacters:(id)a0;
+ (id)isContentOverflowWithTextView:(id)a0;
+ (id)getTagSource:(unsigned long long)a0;
+ (struct CGSize { double x0; double x1; })coverSizeWithModel:(id)a0 editService:(id)a1 useCurrentProjectIndex:(BOOL)a2;
+ (struct CGSize { double x0; double x1; })imageSizeForMixedSlidesIfNeeded:(id)a0 imageSize:(struct CGSize { double x0; double x1; })a1;
+ (void)getFileSizeWithFilePaths:(id)a0 completeBlock:(id /* block */)a1;
+ (BOOL)isValidJSONCharacters:(id)a0;
+ (BOOL)enableSlidesEditPagePreUpload;
+ (void)routeToHomepageWithLandingTab:(long long)a0;
+ (id)sharedInstance;

- (id)aAWEStudioDOUYINSSAdapter;
- (void).cxx_destruct;

@end
