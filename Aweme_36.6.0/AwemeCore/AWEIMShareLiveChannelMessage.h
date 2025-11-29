@class NSString;

@interface AWEIMShareLiveChannelMessage : AWEIMMessage <AWEIMMsgRefreshMessageProtocol>

@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *subTitle;
@property (retain, nonatomic) NSString *coverUrl;
@property (retain, nonatomic) NSString *roomID;
@property (retain, nonatomic) NSString *schema;
@property (nonatomic) long long roomStatus;
@property (copy, nonatomic) NSString *roomOwnerID;
@property (copy, nonatomic) NSString *roomOwnerSecID;
@property (copy, nonatomic) NSString *anchorNickName;
@property (copy, nonatomic) NSString *pushDetail;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)customMessageType;

- (id)getUniqueResourceId;
- (id)initWithContentDict:(id)a0;
- (BOOL)isAllowedCellEdit;
- (BOOL)isUserCellType;
- (id)getContentDict;
- (id)contentComponentName;
- (BOOL)supportRefactorCell;
- (BOOL)isAllowedEmojiReply;
- (BOOL)shouldShowNicknameWithMessageType;
- (BOOL)isAllowedForward;
- (id)supportMessageMenuTypeList;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
