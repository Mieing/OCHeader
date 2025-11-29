@class NSDictionary, NSString;

@interface AWEStickerApplyMentionHandler : AWEStickerApplyBaseHandler <ACCRecordFlowServiceSubscriber, ACCRecordSwitchModeServiceSubscriber>

@property (retain, nonatomic) NSDictionary *cachedUsersDic;
@property (retain, nonatomic) NSDictionary *appliedMentionsDic;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)switchModeServiceWillChangeToMode:(id)a0 oldMode:(id)a1;
- (void)flowServiceWillBeginTakePicture;
- (void)flowServiceDidUpdateDuration:(double)a0;
- (void)flowServiceDidRemoveLastSegment:(BOOL)a0;
- (void)flowServiceDidAddFragment:(id)a0;
- (void)flowServiceDidRemoveAllSegment;
- (void)flowServiceDidTakePicture:(id)a0 error:(id)a1;
- (void)camera:(id)a0 willApplySticker:(id)a1 propSource:(long long)a2;
- (void)handlerDidBecomeActive;
- (id)p_currentProp;
- (void)p_addMentionIfNeeded;
- (void)p_PrefetchAllSticerMentionsInfo;
- (void)p_fetchMentionForStickersIfNeeded:(id)a0;
- (id)p_mentionUserIdOfSticker:(id)a0;
- (void)p_fetchMentionUserInfoWithUserID:(id)a0 stickerID:(id)a1 withNeedApplyMention:(BOOL)a2;
- (void)p_removeAllMentions;
- (void)p_applyMentionForUserID:(id)a0 stickderID:(id)a1;
- (id)p_mentionOfUserID:(id)a0;
- (BOOL)isStickerMentionUser:(id)a0;
- (void)p_removeMentionFor:(id)a0;
- (void)p_configMentionFromUser:(id)a0 stickderID:(id)a1;
- (BOOL)p_shouldAddMentionFor:(id)a0;
- (void).cxx_destruct;

@end
