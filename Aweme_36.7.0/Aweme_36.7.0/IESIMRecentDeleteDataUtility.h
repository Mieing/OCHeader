@interface IESIMRecentDeleteDataUtility : NSObject

+ (void)fetchDeletedConvInfoListWithCursor:(long long)a0 limitCount:(long long)a1 selectAllFlag:(BOOL)a2 completion:(id /* block */)a3;
+ (void)handleFetchDeletedConvInfoListResponseWithInfos:(id)a0 hasMore:(BOOL)a1 nextCursor:(long long)a2 error:(id)a3 selectAllFlag:(BOOL)a4 completion:(id /* block */)a5;
+ (void)p_fetchConListWithInfos:(id)a0 completion:(id /* block */)a1;

@end
