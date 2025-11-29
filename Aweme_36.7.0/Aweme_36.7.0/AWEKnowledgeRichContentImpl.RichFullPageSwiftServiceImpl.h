@interface AWEKnowledgeRichContentImpl.RichFullPageSwiftServiceImpl : HTSService <AWEKnowledgeRichFullPageSwiftService>

- (id)filterUnavailableIDForUserPage:(id)a0 originItemID:(id)a1;
- (long long)getConsumedCommentCountWithModel:(id)a0 scene:(unsigned long long)a1;
- (BOOL)isAwemeNote:(id)a0;
- (long long)fullPageInitMuteState;
- (BOOL)shouldShowAlbumIcon:(id)a0;
- (id)getCommonAlbumDetailPayload:(id)a0 enterFrom:(id)a1 logExtraDict:(id)a2;
- (id)createAlbumDetailViewController:(id)a0 referString:(id)a1 enterFrom:(id)a2 logExtraDict:(id)a3;
- (id)createNewAlbumDetailViewController:(id)a0 enterFrom:(id)a1 logExtraDict:(id)a2;
- (id)createNewAlbumDetailViewController:(id)a0;
- (id)init;

@end
