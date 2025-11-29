@class IESIMGrowingTextView, NSString, NSMutableSet, AWEIMMentionParticipantViewController;

@interface IESIMInputMentionComponent : AWEIMComponentBase <IESIMInputMentionComponentInterface, AWEIMExpediteMentionParticipantViewControllerDelegate, IESIMInputKeyboardComponentAction, IESIMInputThemeChangedAction>

@property (retain, nonatomic) NSMutableSet *mentionIDSet;
@property (retain, nonatomic) IESIMGrowingTextView *textView;
@property (retain, nonatomic) AWEIMMentionParticipantViewController *expediteMentionParticipantVC;
@property (nonatomic) BOOL disableMentionPanel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)hostVC_willDealloc;
- (void)afterInitialComponentAllResolved:(id)a0;
- (void)hostVC_viewDidLoad;
- (void)componentDidMounted:(id)a0;
- (void)mentionAllGroupParticipant;
- (void)mentionFansGroupOwner;
- (void)trigMentionPanel;
- (void)longPressUserAvatar:(id)a0;
- (void)mentionUser:(id)a0 extraParams:(id)a1;
- (void)showKeyboardWithText:(id)a0 userPlaceholder:(id)a1 mentionUsers:(id)a2;
- (void)atPetElfBot:(id)a0 forScene:(id)a1;
- (BOOL)isShowingGroupMentionPanel;
- (void)dismissGroupMentionPanelIfNeeded;
- (void)handleInputMentionAIWithConfiguration:(id)a0;
- (id)mentionUserAttributesWithUserID:(id)a0 rawString:(id)a1;
- (id)mentionedUserAttributedStringWithUser:(id)a0 conversationParticipant:(id)a1 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 rawAttributedString:(id)a3;
- (void)atBtnClicked:(id)a0;
- (id)generateMentionValueForUserID:(id)a0 length:(long long)a1;
- (void)handleInputMentionNotification:(id)a0;
- (void)checkExpediteMentionParticipant;
- (void)updateExpediteMentionParticipantVCBottomY;
- (void)resetMentionList;
- (BOOL)parseMentionValue:(id)a0 timestamp:(long long *)a1 userID:(long long *)a2 length:(int *)a3;
- (void)__mentionAllGroupParticipant;
- (void)__mentionFansGroupOwner;
- (id)makeMentionUserContent:(id)a0;
- (void)updateTextViewForAtUser:(id)a0 mentionName:(id)a1 userUid:(id)a2 ext:(id)a3;
- (void)inputThemeChangedWithThemeStyle:(long long)a0;
- (void)refreshBackgroundWithBackGroundImage:(BOOL)a0;
- (void)expediteMentionDidSelectUser:(id)a0 searchingMentionRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 appendAITip:(id)a2;
- (void)adjustMentionWithAttributeText:(id)a0 composeRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)adjustMentionIDWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 textView:(id)a1;
- (void)verifyMentionIDWithTextView:(id)a0;
- (void)createMentionParticipantViewController;
- (void)expediteMentionDidSelectCollectionType:(unsigned long long)a0 mentionCollectionName:(id)a1 searchingMentionRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;
- (BOOL)p_isInMentionRangeForRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)expedite_mentionUser:(id)a0 searchingMentionRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 appendAITip:(id)a2;
- (void)p_updateSelectedRangeWithName:(id)a0 searchingMentionRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)p_removeMentionUid:(id)a0 mentionLabel:(unsigned long long)a1;
- (void)expediteMentionDidDeselectUser:(id)a0;
- (void)expediteMentionDidDeselectCollectionType:(unsigned long long)a0 mentionCollectionName:(id)a1;
- (void)keyboardWillShow;
- (void).cxx_destruct;
- (void)keyboardDidShow;

@end
