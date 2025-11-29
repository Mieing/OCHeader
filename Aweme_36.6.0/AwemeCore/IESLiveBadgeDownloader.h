@interface IESLiveBadgeDownloader : NSObject

- (BOOL)p_needLoadBadgesInBackWith:(id)a0 completion:(id /* block */)a1;
- (BOOL)needLoadBadgesInBackWithUserModel:(id)a0 completion:(id /* block */)a1;
- (BOOL)p_allExistInCache:(id)a0;
- (void)p_downloadIconsWith:(id)a0 completion:(id /* block */)a1;
- (BOOL)needLoadBadgesInBackWithUserModels:(id)a0 completion:(id /* block */)a1;
- (BOOL)needLoadBadgesInBackWithImages:(id)a0 completion:(id /* block */)a1;

@end
