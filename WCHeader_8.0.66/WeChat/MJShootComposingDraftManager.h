@class NSMutableDictionary;

@interface MJShootComposingDraftManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *finderDraftsByID;
@property (nonatomic) BOOL isDraftsAllLoaded;

+ (id)defaultMMKV;
+ (id)aigcAsyncDraftsRelativeDirectoryPath;
+ (id)aigcAsyncDraftsAbsoluteDirPathWithID:(id)a0;

- (id)init;
- (void)prepareDraftsWithCompletion:(id /* block */)a0;
- (void)loadAllDraftAsyncWithCompletion:(id /* block */)a0;
- (void)loadAllDraft;
- (BOOL)saveDraft:(id)a0;
- (void)removeDraftWithID:(id)a0;
- (void)removeAllDraftsWithExcludeDraftID:(id)a0;
- (id)draftWithID:(id)a0;
- (void).cxx_destruct;

@end
