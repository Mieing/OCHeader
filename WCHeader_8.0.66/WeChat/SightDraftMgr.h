@class NSMutableArray;

@interface SightDraftMgr : MMObject {
    NSMutableArray *m_draftList;
}

- (id)init;
- (void)dealloc;
- (void)addDraft:(id)a0;
- (void)insertDraft:(id)a0;
- (void)removeDraft:(id)a0;
- (void)removeDraft:(id)a0 needWriteIndexFile:(BOOL)a1;
- (id)getDraftList;
- (void).cxx_destruct;

@end
