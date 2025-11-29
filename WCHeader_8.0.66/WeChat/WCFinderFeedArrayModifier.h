@interface WCFinderFeedArrayModifier : NSObject {
    struct vector<ModifyItem, std::allocator<ModifyItem>> { struct ModifyItem *__begin_; struct ModifyItem *__end_; struct __compressed_pair<ModifyItem *, std::allocator<ModifyItem>> { struct ModifyItem *__value_; } __end_cap_; } changes;
}

- (void)clear;
- (void)append:(id)a0;
- (void)add:(id)a0;
- (void)insertHead:(id)a0;
- (void)insert:(id)a0 after:(id)a1;
- (void)insert:(id)a0 before:(id)a1;
- (void)insert:(id)a0 after:(id)a1 flag:(long long)a2;
- (void)insert:(id)a0 before:(id)a1 flag:(long long)a2;
- (void)replaceAll:(id)a0;
- (void)remove:(id)a0;
- (void)removeTidList:(id)a0;
- (void)replace:(id)a0 target:(id)a1;
- (void)appendFromArray:(id)a0;
- (void)appendFromArray:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)insertHeadFromArray:(id)a0;
- (void)insertHeadFromArray:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
