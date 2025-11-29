@interface AWEIMSearchResultConvertor : NSObject

+ (id)textInfoForResult:(id)a0;
+ (id)cellItemForMessageResult:(id)a0 inConversation:(id)a1;
+ (id)cellItemForConverstaion:(id)a0;
+ (id)cellItemForResult:(id)a0;
+ (id)cellItemForMessageCount:(id)a0;
+ (id)cellItemForMessageResult:(id)a0;
+ (id)cellItemForMultiRecallResult:(id)a0;
+ (id)cellItemForSpaceOptimizedResult:(id)a0;
+ (id)p_cellTextInfoWithUser:(id)a0 andData:(id)a1 aliasHasPrefix:(BOOL)a2;
+ (BOOL)p_onlineStateWithObjcet:(id)a0;
+ (long long)maxTitleLabelTextLength;
+ (BOOL)configItem:(id)a0 withMsg:(id)a1 spaceOptData:(id)a2;
+ (id)timeTextForDate:(id)a0;
+ (long long)maxSubTitleLabelTextLength;
+ (id)initItemWithCon:(id)a0;
+ (void)configItemWithData:(id)a0 item:(id)a1 msg:(id)a2;
+ (id)dateFormatterForD;
+ (id)getMultiRecallTowLineTextInfo:(id)a0;
+ (id)getSpaceOptimizedTowLineTextInfo:(id)a0;
+ (void)addParticipantData:(id)a0 andParticipantUser:(id)a1 toSubtitleInfo:(id)a2 needInsertPrefix:(BOOL)a3;
+ (id)getMultiRecallSubtitleInfo:(id)a0;
+ (long long)getShowSectionFromSearchType:(long long)a0;

@end
