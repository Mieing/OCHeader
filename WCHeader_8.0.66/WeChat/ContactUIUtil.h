@interface ContactUIUtil : MMObject

+ (void)alignPanelViewToSearchBarView:(id)a0 panelView:(id)a1 headSearchPanelView:(id)a2 isHiddenheadSearchPanelView:(BOOL)a3 headSearchPanelViewTop:(double)a4;
+ (void)makeSearchSectionHeaderView:(id)a0 headerViewWidth:(double)a1;
+ (void)makeSearchSectionHeaderViewMultiSelectBtnChange:(id)a0 isShow:(BOOL)a1;
+ (void)resetContactCell:(id)a0;
+ (void)disableSelectContactCell:(id)a0 isSelected:(BOOL)a1;
+ (double)getSearchPanelViewHeight:(BOOL)a0;
+ (double)getSearchPanelHeadImagesize:(BOOL)a0;
+ (double)getSearchPanelInputViewHeight:(BOOL)a0;
+ (double)getSearchPanelCellSize:(BOOL)a0;
+ (void)resetNewContactsSearchPanelViewAccessibility:(id)a0;
+ (void)resetFavourContactIconViewAccessibility:(id)a0;
+ (BOOL)checkNewTokenPickSearch;
+ (id)makeRecommendTextView:(id)a0 viewWidth:(double)a1;
+ (id)getContactsHistoryGroupWord;
+ (id)getPermissionTextWithContact:(id)a0;
+ (id)getWCAddBlacklistCellTitleWithContact:(id)a0;
+ (id)getWCOutsiderCellTitleWithContact:(id)a0;
+ (id)getWCAddBlacklistAndOutsiderCellTitleWithContact:(id)a0;
+ (id)getViewControllerTitleWithSectionType:(unsigned int)a0;
+ (id)getCreateChatSectionHeadViewWord;
+ (id)getContactsRecommendContactWord;
+ (id)getChatRoomInvitationListTipsBarTitle:(id)a0;
+ (void)addOuterBorderToView:(id)a0 color:(id)a1 width:(double)a2 cornerRadius:(double)a3;
+ (id)getMessageRoomContentStillNotificationMsgDescitleWithContact:(id)a0;
+ (id)printArrContact:(id)a0;
+ (BOOL)checkShareCardCanForward:(id)a0;
+ (void)forceFoundContactUpdateStrangerHeadImage:(id)a0;
+ (id)getAttributedTextForTagName:(id)a0 searchText:(id)a1;
+ (id)getTagMemberHighlightAttributedString:(id)a0 memberLableFont:(id)a1 searchText:(id)a2 dicSearchMatchTip:(id)a3;
+ (id)genSearchTagNoResultViewForKeyword:(id)a0 width:(double)a1 emptyLabelTop:(double)a2 viewHeight:(double)a3;

@end
