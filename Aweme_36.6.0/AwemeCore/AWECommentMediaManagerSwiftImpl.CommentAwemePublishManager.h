@interface AWECommentMediaManagerSwiftImpl.CommentAwemePublishManager : NSObject <AWECommentAwemePublishProtocol>

+ (void)publishAwemeWithComposerModel:(id)a0 commentModel:(id)a1;
+ (BOOL)commentAwemePublishOptimizeWith:(id)a0;
+ (BOOL)supportCommentCreateAwemeWith:(id)a0;
+ (struct _NSRange { unsigned long long x0; unsigned long long x1; })extractPatternSubstringFrom:(id)a0 highLightString:(id)a1;
+ (void)updateWhenNoticeGuideShowWith:(id)a0;
+ (BOOL)shouldShowGuideViewWith:(id)a0;
+ (void)publishAwemeWith:(id)a0;

- (id)init;

@end
