@class NSMutableDictionary;

@interface MJMovieComposingDraftManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *finderDraftsByID;
@property (retain, nonatomic) NSMutableDictionary *weGameDraftsByID;

+ (id)defaultMMKV;

- (id)init;
- (void)setupDraftsByIDs;
- (BOOL)saveDraft:(id)a0 withEntryScene:(long long)a1;
- (void)loadAllDrafts;
- (id)latestDraftWithEntryScene:(long long)a0;
- (void)clearOutdatedDraftsWithEntryScene:(long long)a0;
- (void)removeDraftWithID:(id)a0;
- (void)removeAllDraftsWithEntryScene:(long long)a0;
- (void)removeAllDraftsWithEntryScene:(long long)a0 excludeDraftID:(id)a1;
- (id)_draftsByIDWithEntryScene:(long long)a0;
- (void).cxx_destruct;

@end
