@class NSString;

@interface AWEIMShareMessageCreater : NSObject <AWEIMShareMessageCreaterInterface>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shareAwemeToX:(id)a0;
+ (id)quoteReplyMessageWithAwemeModel:(id)a0 commentModel:(id)a1 shareText:(id)a2;
+ (id)sendThirdPartGameMessageWithGameInvititationModel:(id)a0;
+ (id)sendShareTrendingMessageWithTrendingModel:(id)a0;
+ (id)sendShareGoodsMessageWithGoodsModel:(id)a0;
+ (id)sendSharePoiMessageWithPoiInfoModel:(id)a0 mapImageURL:(id)a1;
+ (id)sendBotShareMessageWithBotModel:(id)a0;
+ (id)sendShareH5MessageWithWebViewModel:(id)a0;
+ (id)sendSharePlayRemoteMessageWithLiveModel:(id)a0;
+ (id)sendShareLiveMessageWithLiveModel:(id)a0 exrtaParams:(id)a1;
+ (id)sendBatManMessageWithContentModel:(id)a0;
+ (id)sendRoomGameMessageWithContentModel:(id)a0;
+ (id)sendInviteFriendMessageWithContentModel:(id)a0;
+ (id)quoteReplyMessageWithAwemeModel:(id)a0 commentModel:(id)a1 noticeReplyModel:(id)a2 shareText:(id)a3;
+ (id)sendShareDSPMusicMessageWithAweModel:(id)a0;
+ (id)sendCardMessageWithAwemeModel:(id)a0 profileUID:(id)a1;
+ (id)sendCloseFriendMomentMessageWithAwemeModel:(id)a0 momentType:(unsigned long long)a1;
+ (id)sendShareChallengeMessageWithChallengeModel:(id)a0;
+ (id)sendChapterShareMessageWithChapterShareModel:(id)a0;
+ (id)sendFavoriteFolderMessageWithModel:(id)a0;
+ (id)sendVideoCommentShareMessageWithCommentShareModel:(id)a0;
+ (id)sendShareDSPMusicMessageWithMusicId:(id)a0 musicNmae:(id)a1 authorName:(id)a2 coverURL:(id)a3 isFromDsp:(BOOL)a4 isVideo:(BOOL)a5 aweme:(id)a6;
+ (id)sendThirdPartImageMessageWithLinkModel:(id)a0;
+ (id)sendEntertainmentCommentShareMessageWithCommentShareModel:(id)a0;
+ (id)sendShareGameMessageWithGameModel:(id)a0;
+ (id)sendHotSpotCommentShareMessageWithCommentShareModel:(id)a0;
+ (id)sendShareVSLiveMessageWithLiveModel:(id)a0 exrtaParams:(id)a1;
+ (id)sendShareLiveChannelMessageWithLiveModel:(id)a0 withInviteID:(id)a1;
+ (id)forwardMessageWithForwardMessage:(id)a0;
+ (id)sendMixVideoMessageWithMixVideoModel:(id)a0;
+ (id)sendShareMusicMessageWithMusicModel:(id)a0;
+ (id)sendPlayletVideoMessageWithPlayletVideoModel:(id)a0;
+ (id)sendSharePoiCouponMessageWithPoiInfoModel:(id)a0;
+ (id)sendSharePoiRankMessageWithPoiRankInfoModel:(id)a0;
+ (id)sendShareProfileMessageWithUserModel:(id)a0;
+ (id)sendShareSeriesEmojiMessageWithThemeResponseModel:(id)a0;
+ (id)sendShareShopMessageWithShopModel:(id)a0;
+ (id)sendShareStickerMessageWithStickerModel:(id)a0;
+ (id)sendShareStoreMessageWithStoreModel:(id)a0;
+ (id)sendShareTemplateMessageWithTemplateModel:(id)a0;
+ (id)sendThirdPartLinkMessageWithLinkModel:(id)a0;
+ (id)sendShareTrendMessageWithTrendInfoModel:(id)a0;
+ (id)sendSharePositiveTrendingMessageWithTrendingModel:(id)a0;
+ (id)sendShareLiveMessageWithVSLiveModel:(id)a0;
+ (id)p_cardMessageContent:(id)a0;
+ (id)p_longVideoMessageContent:(id)a0;
+ (id)quoteReplyMediaContentWithAwe:(id)a0 comment:(id)a1;
+ (id)p_friendsAlbumMessageContent:(id)a0;
+ (unsigned long long)convertQuoteReplyTypeToSceneType:(unsigned long long)a0;
+ (long long)convertCommentModelToCommentContentType:(id)a0;
+ (id)shareChallengeMessageUserCountWithChallengeModel:(id)a0;
+ (long long)shareMessageUpdateStatusWithVSLiveModel:(id)a0;
+ (unsigned long long)convertShareRoomStatusToIMStatus:(unsigned long long)a0;
+ (unsigned long long)convertShareRefreshTimeIntervalTypeToIMType:(unsigned long long)a0;
+ (unsigned long long)convertShareTransferSchemeTypeToIMType:(unsigned long long)a0;
+ (unsigned long long)convertShareSchemeAdjustTypeToIMType:(unsigned long long)a0;
+ (id)sendShareStoryMessageWithStoryModel:(id)a0 text:(id)a1;
+ (id)responseToWhoSeeMyStoryMessageWithStoryModel:(id)a0 text:(id)a1;
+ (id)sharedInstance;

- (id)quoteReplyMessageWithAwemeModel:(id)a0 commentModel:(id)a1 shareText:(id)a2 imQuoteReplyType:(unsigned long long)a3;
- (id)sendTextMessageWithContent:(id)a0 relatedShareVideoItemID:(id)a1;
- (id)videoCommentShareMessageWithCommentShareModel:(id)a0;
- (id)quoteReplyMessageWithAwemeModel:(id)a0 shareText:(id)a1;
- (id)sendCardMessageWithAwemeModel:(id)a0 context:(id)a1;
- (id)sendInviteGroupMessageWithGroupModel:(id)a0;
- (id)sendTextMessageWithContent:(id)a0;

@end
