@interface AWEIMShareBasicImpl.ShareContactListServiceImpl : HTSService <AWEIMShareContactListService> {
    void /* unknown type, empty encoding */ $__lazy_storage_$_useReorderOpt;
}

- (void)registerIMShareContactListExternalDataSource:(id)a0;
- (void)updateShareContactListWithShareModels:(id)a0 uniqueSourceKey:(id)a1 updateSource:(unsigned long long)a2;
- (void)appendShareContactListWithShareModels:(id)a0 uniqueSourceKey:(id)a1 updateSource:(unsigned long long)a2;
- (void)frontInsertShareContactListWithShareModels:(id)a0 uniqueSourceKey:(id)a1 updateSource:(unsigned long long)a2;
- (void)clearShareContactListWithUniqueSourceKey:(id)a0 updateSource:(unsigned long long)a1;
- (void)fetchIMShareContactListWithContext:(id)a0 completion:(id /* block */)a1;
- (void)additionallyRequestRemoteData;
- (BOOL)enableNewIMShareContactListDataRefactorWithBusinessScene:(id)a0;
- (id)getRecentSharedModelsWithIMShareModel:(id)a0;
- (id)init;
- (void)setup;

@end
