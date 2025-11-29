@class NSString;

@interface AWECommentInputNetworkServiceImpl : NSObject <AWECommentInputNetworkService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)publishCommentWithModel:(id)a0 completion:(id /* block */)a1;
- (id)generatePublishParameterModelWithText:(id)a0 extraInfo:(id)a1 sticker:(id)a2 imageSource:(id)a3 imageModels:(id)a4 audioModel:(id)a5 awemeModel:(id)a6 generalItemID:(id)a7 serviceID:(id)a8 replyCommentID:(id)a9 replySubCommentID:(id)a10 replySubCommentAuthorName:(id)a11 replyCommentToken:(id)a12 scene:(unsigned long long)a13 enterFrom:(id)a14 referString:(id)a15 previousPage:(id)a16 extraParams:(id)a17;
- (id)generateFakeCommentWithText:(id)a0 extraInfo:(id)a1 sticker:(id)a2 imageModels:(id)a3 audioModel:(id)a4 awemeID:(id)a5 replyCommentID:(id)a6 replyComment:(id)a7 replySubComment:(id)a8 replyCommentToken:(id)a9 publishParams:(id)a10 retryPublishParams:(id)a11;
- (id)addGroupExtraIfNeeded:(id)a0 withText:(id)a1 conversationInfo:(id)a2;
- (id)insertPrefixTextUpdateExtraIfNeeded:(id)a0 withText:(id)a1 prefixText:(id)a2 prefixTextExtras:(id)a3;

@end
