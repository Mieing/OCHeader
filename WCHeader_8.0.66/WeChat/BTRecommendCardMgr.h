@interface BTRecommendCardMgr : NSObject

+ (BOOL)isArticleStyleCardWithStyle:(unsigned int)a0;
+ (BOOL)isFinderCardWithStyle:(unsigned int)a0;
+ (BOOL)isMissedSubsCardWithStyle:(unsigned int)a0;
+ (BOOL)needShowAllCellView:(unsigned int)a0;
+ (unsigned int)maxVisibleAccountCount:(unsigned int)a0;
+ (unsigned int)maxVisibleAppMsgCountPerAccount:(unsigned int)a0;
+ (unsigned int)getCardTypeWithRecCardWrapper:(id)a0;
+ (unsigned int)getCardTypeWithAdCanvasCard;
+ (unsigned int)getCardTypeWithRecCanvasCard;
+ (unsigned int)getCardTypeWithStyle:(unsigned int)a0;
+ (unsigned int)getCardTypeWithRecoFlowStyle:(unsigned int)a0;
+ (id)getCardIdFromRecCardWrapper:(id)a0;
+ (id)getMainSessionTitleFromMsg:(id)a0;
+ (id)getMainSessionTitleFromRecCardWrapper:(id)a0;
+ (unsigned int)getMainSessionMediaTypeFromMsg:(id)a0;
+ (unsigned int)getMainSessionMediaTypeFromRecCardWrapper:(id)a0;
+ (BOOL)canHandleRecCard:(id)a0;
+ (BOOL)canHandleRecArticleCard:(id)a0;
+ (BOOL)shouldCheckSubscriptionByRecWrapper:(id)a0;
+ (BOOL)canHandleMissedSubsRecCard:(id)a0;
+ (BOOL)canHandleRecCardWrapper:(id)a0;
+ (BOOL)canHandleCanvasRecCardWrapper:(id)a0;
+ (BOOL)canHandleFinderRecCardWrapper:(id)a0;
+ (BOOL)canHandleTLRecFinderCardData:(id)a0;
+ (BOOL)isMissedSubsItemShowBigCoverWithRecMsgData:(id)a0 itemIndex:(unsigned int)a1;
+ (id)getCoverUrlForMissedSubsItemWithRecMsgData:(id)a0 itemIndex:(unsigned int)a1;
+ (BOOL)isFinderCardDataAllUserHasDeletedWithRecCardWrapper:(id)a0;
+ (BOOL)isFinderCardDataNeedDeleteWithRecommendSectionData:(id)a0;
+ (BOOL)isFinderCardDataNeedDeleteWithRecommendSectionData:(id)a0 blockedFinderUserName:(id)a1;
+ (BOOL)internalCheckIsFinderCardDataNeedDeleteWithRecommendSectionData:(id)a0 blockedFinderUserName:(id)a1;
+ (BOOL)isFinderCardDataContainMPInterestDataWithRecommendSectionData:(id)a0;
+ (BOOL)enableFinderInterestCard:(BOOL)a0;
+ (BOOL)isValidFinderInterestCardData:(id)a0;
+ (id)getFinderMPInterestDataWithFromSessionIdInfo:(id)a0 useBrandTimelineMsgMgrConfig:(BOOL)a1;
+ (BOOL)isFinderCardDataContainMPInterestDataWithStyle:(unsigned int)a0 subType:(int)a1 finderCardDatas:(id)a2 fromSessionIdInfo:(id)a3;
+ (id)getFinderCardDataNeedUpdateIndexWithRecommendSectionData:(id)a0;
+ (id)getFinderCardDataNeedUpdateIndexWithRecommendSectionData:(id)a0 blockedFinderUserName:(id)a1;
+ (BOOL)isBrandContactSubscribedWithRecFinderCardData:(id)a0;
+ (BOOL)isFinderContactSubscribedWithRecFinderCardData:(id)a0;
+ (BOOL)isContactSubscribedWithRecFinderCardData:(id)a0;
+ (BOOL)isBrandContactDidBlockFinderWithRecFinderCardData:(id)a0;
+ (id)getMainSessionTitleFromRecFinderCardWrapper:(id)a0;
+ (unsigned int)getMainSessionMediaTypeFromRecFinderCardWrapper:(id)a0;
+ (BOOL)canOpenLandScapeVideoPage:(id)a0;

@end
