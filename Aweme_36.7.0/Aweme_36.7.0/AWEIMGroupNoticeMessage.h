@class AWEIMGroupNoticeBackupTextModel, NSString, NSArray, AWEIMGroupNameAlertView, AWEIMLinkTextUtility, NSMutableDictionary, NSDictionary, AWEIMGroupNoticeAttributedContentContext;

@interface AWEIMGroupNoticeMessage : AWEIMMessage <AWEIMMessageConfigProtocol, AWEIMSpecialEffectAnimateProtocol, AWEIMYYLabelHighlightAccessibilityProtocol>

@property (retain, nonatomic) AWEIMGroupNameAlertView *alertView;
@property (nonatomic) BOOL hasBackgroundImage;
@property (nonatomic) long long removeUserNoticeType;
@property (copy, nonatomic) NSString *innerContent;
@property (nonatomic) BOOL willIngoreCurrentUser;
@property (copy, nonatomic) NSDictionary *contentExt;
@property (retain, nonatomic) NSArray *templateArray;
@property (retain, nonatomic) AWEIMGroupNoticeAttributedContentContext *attributedContentContext;
@property (retain, nonatomic) NSMutableDictionary *highlightTapActionMap;
@property (retain, nonatomic) NSArray *subjectUsers;
@property (retain, nonatomic) NSArray *objectUsers;
@property (retain, nonatomic) AWEIMGroupNoticeBackupTextModel *cnBackupText;
@property (retain, nonatomic) AWEIMGroupNoticeBackupTextModel *enBackupText;
@property (retain, nonatomic) AWEIMLinkTextUtility *linkTextUtility;
@property (readonly, copy, nonatomic) NSString *content;
@property (nonatomic) BOOL noticeByCreateGroup;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)viewModelClass;
+ (BOOL)shouldGenerateTopGroupNoticeWithMessage:(id)a0;
+ (BOOL)aweim_shouldGenerateTopGroupNoticeWithFaceToFaceCreate:(BOOL)a0 conversationID:(id)a1;
+ (BOOL)shouldGenerateTopGroupNoticeWithIESMessage:(id)a0;

- (id)initWithContentDict:(id)a0;
- (BOOL)isUserCellType;
- (id)getContentDict;
- (id)contentComponentName;
- (id)calculateAttributedContent;
- (void)dismissAlertView;
- (BOOL)shouldHideWithCon:(id)a0;
- (BOOL)supportRefactorCell;
- (id)pluginsComponentsName;
- (BOOL)canShowSpecialEffect;
- (void)prepareForConversationHint;
- (id)contentHighlightActionMap;
- (id)p_getObjectNameWithObjectRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (id)p_getSubjectNameWithSubjectRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (id)__tipsModifiedWithBaseText:(id)a0 usersArray:(id)a1 currentUserID:(id)a2 placeholderString:(id)a3 useZH:(BOOL)a4;
- (id)p_getObjectNameWithObjectRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 ignoreCurrentUser:(BOOL)a1;
- (id)calculateTips;
- (id)calculateAttributeDict;
- (id)__attributedTipsContentContextByAweType;
- (void)__savaHighlightTapAction:(id /* block */)a0 range:(id)a1;
- (void)p_addPersonalDetailLinkToAttStr:(id)a0 withNoticeUser:(id)a1;
- (void)p_changeGroupName;
- (void)__openGroupManager;
- (void)__openGroupAnnounce;
- (void)__transferToSearchResultPage;
- (void)__openEditGroupAvatar;
- (void)p_transferToCreateGroupVC;
- (void)__openGroupSetting;
- (void).cxx_destruct;
- (long long)templateType;

@end
