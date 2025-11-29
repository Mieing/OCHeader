@class NSString, AWEURLModel;

@interface AWEIMShareDSPMusicMessage : AWEIMMessage <AWEIMMessageConfigProtocol, AWEIMMsgRefreshMessageProtocol>

@property (copy, nonatomic) NSString *musicTitle;
@property (copy, nonatomic) NSString *musicId;
@property (copy, nonatomic) NSString *musicAuthor;
@property (retain, nonatomic) AWEURLModel *musicCoverURL;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *itemID;
@property (nonatomic) long long awemeType;
@property (nonatomic) unsigned long long playStatus;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)getUniqueResourceId;
- (id)initWithContentDict:(id)a0;
- (BOOL)isAllowedCellEdit;
- (BOOL)isUserCellType;
- (id)getContentDict;
- (id)contentComponentName;
- (BOOL)supportRefactorCell;
- (BOOL)isAllowedEmojiReply;
- (BOOL)shouldShowNicknameWithMessageType;
- (BOOL)musicUnavailableFlag;
- (id)getSyncedExtDict;
- (BOOL)isAllowedForward;
- (id)sendMessageAndResponseTrackerParams:(id)a0;
- (BOOL)isSupportForward;
- (id)supportMessageMenuTypeList;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
