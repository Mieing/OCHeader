@interface DanceUIDataSourceSnapshotter : NSObject {
    struct vector<_NSRange, std::allocator<_NSRange>> { struct _NSRange *__begin_; struct _NSRange *__end_; struct _NSRange *__cap_; } _sectionRanges;
}

- (long long)globalIndexForSection:(long long)a0 item:(long long)a1;
- (long long)indexPathItemForGlobalIndex:(long long)a0 section:(long long *)a1;
- (long long)numberOfItems;
- (long long)numberOfItemsInSection:(long long)a0;
- (id)indexPathForGlobalIndex:(long long)a0;
- (void).cxx_destruct;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangeForSection:(long long)a0;
- (id)description;
- (long long)globalIndexForItemAtIndexPath:(id)a0;
- (id)init;
- (BOOL)_deleteSection:(long long)a0;
- (BOOL)_incrementSectionCount:(long long)a0;
- (id).cxx_construct;
- (id)initWithSectionCounts:(id)a0;
- (id)snapshot;
- (id)indexPathForAppendingInsertInSection:(long long)a0;
- (long long)numberOfSections;
- (long long)sectionForGlobalIndex:(long long)a0;
- (BOOL)_insertSection:(long long)a0 withInitialCount:(long long)a1;
- (BOOL)isEqual:(id)a0;
- (long long)numberOfItemsBeforeSection:(long long)a0;
- (long long)globalIndexForIndexPath:(id)a0;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)_recomputeRangeLocations;
- (BOOL)indexPathIsSectionAppendingInsert:(id)a0;
- (BOOL)_incrementSectionCount:(long long)a0 byCount:(long long)a1;
- (BOOL)_decrementSectionCount:(long long)a0 byCount:(long long)a1;
- (BOOL)_decrementSectionCount:(long long)a0;

@end
