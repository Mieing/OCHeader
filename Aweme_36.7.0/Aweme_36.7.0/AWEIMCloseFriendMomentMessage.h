@class NSString, AWEIMCloseFriendMomentContent, AWEVideoModel;

@interface AWEIMCloseFriendMomentMessage : AWEIMMessage <AWEIMFeedMediaDisplayable, AWEIMMessageConfigProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) AWEIMCloseFriendMomentContent *momentContent;
@property (retain, nonatomic) AWEVideoModel *videoModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)viewModelClass;
+ (id)identifier;

- (id)initWithContentDict:(id)a0;
- (BOOL)isAllowedCellEdit;
- (BOOL)isUserCellType;
- (id)getContentDict;
- (id)contentComponentName;
- (id)momentText;
- (BOOL)supportRefactorCell;
- (id)quoteContentComponentName;
- (BOOL)isAllowedEmojiReply;
- (BOOL)supportItemIDForMessage;
- (id)makeFeedMediaDisplayModel;
- (id)makeFeedMediaDisplayModel;
- (id)itemIDForMessage;
- (BOOL)shouldShowNicknameWithMessageType;
- (id)hintOnInputVCWhenQuoted;
- (BOOL)isAudioNotes;
- (BOOL)shouldChangeVisibleStatus;
- (BOOL)isStoryVideo;
- (id)itemIDUsedForContentAvailableRefresh;
- (struct CGSize { double x0; double x1; })coverSizeWhenQuotedIfHave;
- (id)supportMessageMenuTypeList;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isNotes;

@end
