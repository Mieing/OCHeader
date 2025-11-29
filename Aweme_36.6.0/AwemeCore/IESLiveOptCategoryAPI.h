@interface IESLiveOptCategoryAPI : HTSLiveApi

- (void)fetchLiveCategoryWithLiveType:(unsigned long long)a0 callBack:(id /* block */)a1;
- (void)reviewCategoryName:(id)a0 completionBlock:(id /* block */)a1;
- (void)modifyCategoryWithRoomId:(long long)a0 liveType:(unsigned long long)a1 oldCategoryId:(long long)a2 oldBaseCategoryId:(long long)a3 newCategoryId:(long long)a4 newBaseCategoryId:(long long)a5 completion:(id /* block */)a6;

@end
