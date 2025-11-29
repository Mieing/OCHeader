@class NSString, AFDStoryPlayInteractionConfigModel;

@interface AFDStoryPlayInteractionService : HTSService <AFDStoryPlayInteractionService>

@property (retain, nonatomic) AFDStoryPlayInteractionConfigModel *configModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)newLeftInteractionStyle;
- (BOOL)isLeftInteractionShouldUseNewStyle;
- (BOOL)isMutualFriendInteractionPostWithModel:(id)a0;
- (BOOL)shouldShowCommentBulletElementWithModel:(id)a0;
- (BOOL)shouldShowCommentBoardElementWithModel:(id)a0;
- (BOOL)shouldInsertCaptionCommentWithModel:(id)a0;
- (BOOL)shouldHideCaptionCommentWithModel:(id)a0;
- (BOOL)commentForceShowKeyboardWithModel:(id)a0;
- (BOOL)shouldHideDescriptionElementAfterComment:(id)a0;
- (void)didHideDescriptionElementAfterComment:(id)a0;
- (BOOL)shouldHideDescriptionElementWithModel:(id)a0;
- (BOOL)shouldShowDescriptionElementAfterCommentDelete:(id)a0;
- (void)didShowDescriptionElementAfterCommentDelete:(id)a0;
- (BOOL)shouldHideLandscapeBtnWithModel:(id)a0;
- (id)truncatingUserName:(id)a0 maxCharacter:(long long)a1;
- (void).cxx_destruct;

@end
