@class NSString;

@interface AWEStudioIMModuleServiceImpl : NSObject <AWEIMCreateGroupPageViewControllerDelegate, AWEIMShareContactListViewControllerDelegate, AWEStudioIMModuleServiceProtocol, ACCIMModuleServiceProtocol>

@property (copy, nonatomic) id /* block */ selectGroupCompletion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)groupSelected:(id)a0;
- (void)selectGroupSessionCompleteWithNothing;
- (void)postVideoWithShareList:(id)a0 text:(id)a1 createGroup:(BOOL)a2 extra:(id)a3 completion:(id /* block */)a4;
- (void)postImageWithShareList:(id)a0 text:(id)a1 createGroup:(BOOL)a2 extra:(id)a3;
- (void)shareVideoAfterPublish:(id)a0 publishModel:(id)a1 enterFrom:(id)a2;
- (void)uploadAITextStickerImage:(id)a0 completion:(id /* block */)a1;
- (void)requestSocialInfoWithParams:(id)a0 complete:(id /* block */)a1;
- (BOOL)isEnabledShareToQuickStoryWithAwemeModel:(id)a0;
- (void)enterEditPageWithImagePath:(id)a0;
- (void)enterEditPageWithImagePath:(id)a0 extraInfos:(id)a1;
- (void)enterEditPageWithVideoPath:(id)a0;
- (void)enterEditPageWithVideoPath:(id)a0 trackParams:(id)a1 extraInfos:(id)a2;
- (void)enterEditPageWithImage:(id)a0;
- (void)enterEditPageWithImage:(id)a0 extraInfos:(id)a1;
- (void)downloadVideoWithAwemeModel:(id)a0 completion:(id /* block */)a1;
- (void)matchEmoticonForAttributedString:(id)a0 font:(id)a1;
- (void)updateXmojiInfoIfNeededOnCompletion:(id /* block */)a0;
- (void)replaceEmotionIconTextInAttributedString:(id)a0 font:(id)a1;
- (void)replaceEmotionIconTextInAttributedString:(id)a0 font:(id)a1 emojiSize:(struct CGSize { double x0; double x1; })a2;
- (BOOL)isPublishAtMentionWithRepository:(id)a0;
- (BOOL)preuploadEnable;
- (void)selectGroupForStickerWithCompletion:(id /* block */)a0;
- (BOOL)isGroupTypeWithRepository:(id)a0;
- (id)getEditVCWithInputData:(id)a0;
- (id)imStoryViewController:(id)a0 fromShake:(BOOL)a1 slideInParams:(id)a2;
- (id)imStoryPublishViewController:(id)a0;
- (id)selfieEmojiRecordViewControllerWithResposory:(id)a0;
- (id)halfScreenVCForSendingToFirendsVCWithRootViewController:(id)a0;
- (id)shareListViewControllerWithSelectedList:(id)a0 defaultShareModel:(id)a1;
- (id)imBirthdayEditViewController:(id)a0;
- (id)imSendViewIsGroup:(BOOL)a0 imModel:(id)a1 delegate:(id)a2;
- (id)imSendViewWithType:(unsigned long long)a0 imModel:(id)a1 delegate:(id)a2;
- (id)imSendViewWithFunc:(unsigned long long)a0 imModel:(id)a1 delegate:(id)a2;
- (id)imEditFinishViewInSuperView:(id)a0;
- (BOOL)isIMEditModeFor:(id)a0;
- (unsigned long long)imShootEnterType:(id)a0;
- (void)finishIMEditModeFor:(id)a0 withFilePath:(id)a1 userInfo:(id)a2;
- (BOOL)supportWatchOnce:(BOOL)a0;
- (unsigned long long)getIMPublishTypeFor:(id)a0;
- (BOOL)shouldShowSyncToFriendsBubble:(long long)a0;
- (void)markDidShownSyncToFriendsBubble;
- (BOOL)shouldShowWatchOnceBubble:(long long)a0;
- (void)markDidShownWatchOnceBubble;
- (void)postEditViewRemoveSyncToFriendsBubbleNotification;
- (BOOL)isPublishAtMentionWithPublishModel:(id)a0;
- (void)enterEditPageViaCreaterWithImage:(id)a0;
- (id)externalRecorderViewController:(id)a0;
- (void)enterEditPageViaCreaterWithImage:(id)a0 extraInfos:(id)a1;
- (void)enterEditPageViaCreaterWithVideoPath:(id)a0 trackParams:(id)a1 extraInfos:(id)a2;
- (id)createPublishModel;
- (void)showFailedToast;
- (void)enterEditPageViaCreaterWithVideoPath:(id)a0;
- (void).cxx_destruct;

@end
