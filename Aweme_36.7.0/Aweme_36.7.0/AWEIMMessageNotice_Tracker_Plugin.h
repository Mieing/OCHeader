@class NSString;

@interface AWEIMMessageNotice_Tracker_Plugin : AWEIMFlexComponent <AWEIMLinkTextBehaviorOccursMessage>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentDidMounted:(id)a0;
- (void)cellWillDisplay:(unsigned long long)a0;
- (void)linkTextBehaviorOccursWith:(id)a0 message:(id)a1;
- (void)trackAppealNotice;
- (void)p_trackNoticeMessageShow:(id)a0 withDisplayOption:(unsigned long long)a1;
- (void)p_trackGroupNoticeMessageShow:(id)a0 withDisplayOption:(unsigned long long)a1;
- (void)p_trackCommonNoticeMessageShow:(id)a0;
- (void)p_messageNoticeCommonTrackWithTemplateModels:(id)a0 actionType:(id)a1;
- (void)p_trackAchieveMateNotice:(id)a0 option:(unsigned long long)a1 type:(id)a2;
- (void)p_trackNotice:(id)a0 option:(unsigned long long)a1;
- (void)p_trackChangeChatBackgroundNotice:(id)a0 option:(unsigned long long)a1;
- (void)p_trackLikeExchangeAnswerNotice:(id)a0 option:(unsigned long long)a1;
- (void)p_trackConsecutiveAndFlamePetNotice:(id)a0 option:(unsigned long long)a1;
- (void)p_trackShareDiggNotice:(id)a0 option:(unsigned long long)a1;
- (void)p_trackRTVNotice:(id)a0 option:(unsigned long long)a1;
- (void)p_trackStopAutoSyncingLiveAndWorkNotice:(id)a0 option:(unsigned long long)a1;
- (void)p_trackRemindFriendOpenPushNotice:(id)a0 option:(unsigned long long)a1;
- (void)p_trackEmployeeNotice:(id)a0 option:(unsigned long long)a1;
- (void)p_trackSendMessageUpperLimitNotice:(id)a0 option:(unsigned long long)a1;
- (void)p_trackSchoolSessionEmojiNotice:(id)a0 option:(unsigned long long)a1;
- (void)p_trackVirtualAccountNotice:(id)a0 option:(unsigned long long)a1;
- (void)p_trackChangeBackgroundResponseNotice:(id)a0 option:(unsigned long long)a1;
- (void)p_trackCollectCardGroupNotice:(id)a0 option:(unsigned long long)a1;
- (void)p_trackChangeGroupNameNotice:(id)a0 option:(unsigned long long)a1;
- (void)p_trackRemarkNameNotice:(id)a0 option:(unsigned long long)a1;
- (void)p_trackCreateGroupAfterCoSee;
- (void)p_trackMateUnlockTopic:(id)a0;
- (void)p_trackStreakPetInviteNotice;
- (void)p_trackParticipantTagNotice:(id)a0 option:(unsigned long long)a1;
- (void)p_groupNoticeCommonTrackWithTemplateModels:(id)a0 actionType:(id)a1;
- (void)p_trackBubbleShowWithEvent:(id)a0;
- (void)dealloc;

@end
