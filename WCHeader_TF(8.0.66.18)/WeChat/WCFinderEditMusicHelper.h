@interface WCFinderEditMusicHelper : NSObject

+ (BOOL)shouldShowEditMusicInfoMenuForContentVM:(id)a0;
+ (BOOL)shouldShowEditMusicInfoMenuForContentVM:(id)a0 fetchOriginalItem:(id *)a1;
+ (id)createOpenCtxForContentVM:(id)a0;
+ (void)pushEditViewWithFeedCtx:(id)a0 fromVC:(id)a1;
+ (id)_fillMusicOriginaInfoToLiteAppQuery:(id)a0 ctx:(id)a1;

@end
