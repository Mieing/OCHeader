@class NSString, __RxDataSourceSnapshotter;

@interface __RxDataSourceSnapshot : NSObject <__RxDataSourceSnapshot> {
    __RxDataSourceSnapshotter *_snapshotter;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)globalIndexForSection:(long long)a0 item:(long long)a1;
- (long long)indexPathItemForGlobalIndex:(long long)a0 section:(long long *)a1;
- (long long)numberOfItems;
- (long long)numberOfItemsInSection:(long long)a0;
- (id)indexPathForGlobalIndex:(long long)a0;
- (void).cxx_destruct;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangeForSection:(long long)a0;
- (BOOL)_deleteSection:(long long)a0;
- (BOOL)_incrementSectionCount:(long long)a0;
- (long long)numberOfSections;
- (long long)sectionForGlobalIndex:(long long)a0;
- (BOOL)_insertSection:(long long)a0 withInitialCount:(long long)a1;
- (long long)numberOfItemsBeforeSection:(long long)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)_recomputeRangeLocations;
- (BOOL)_incrementSectionCount:(long long)a0 byCount:(long long)a1;
- (BOOL)_decrementSectionCount:(long long)a0 byCount:(long long)a1;
- (BOOL)_decrementSectionCount:(long long)a0;
- (id)initWithDataSourceSnapshotter:(id)a0;

@end
