@interface MMFinderLiveCollectionStyleCommentPubbleCellFrame : MMLiveCommentPubbleCellFrame

- (void)caculateSizeForComment:(id)a0;
- (void)calculateSizeForUserGeneralWithComment:(id)a0;
- (void)calculateSizeForAnchorNoticeWithComment:(id)a0;
- (void)calculateSizeForAudienceJoinLiveWithComment:(id)a0;
- (void)calculateSizeForUserMySelfWithComment:(id)a0;
- (void)calculateSizeForUserMostLikeWithComment:(id)a0;
- (id)getDisplayStr:(id)a0;
- (BOOL)isCommentContentMultiline;
- (double)pubblehorizontalInset:(id)a0;

@end
