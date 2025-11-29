@class NSNumber, NSString;

@interface AWEIMFavoriteFolderMessage : AWEIMMessage <AWEIMMsgRefreshMessageProtocol, AWEIMMessageConfigProtocol>

@property (retain, nonatomic) NSNumber *collectsId;
@property (retain, nonatomic) NSString *collectsName;
@property (retain, nonatomic) NSNumber *collectsCount;
@property (retain, nonatomic) NSString *authorUid;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)getUniqueResourceId;
- (BOOL)unavailableFlag;
- (id)initWithContentDict:(id)a0;
- (BOOL)isAllowedCellEdit;
- (BOOL)isUserCellType;
- (id)getContentDict;
- (id)contentComponentName;
- (BOOL)supportRefactorCell;
- (BOOL)isAllowedEmojiReply;
- (BOOL)isDisableState;
- (BOOL)shouldShowNicknameWithMessageType;
- (BOOL)isSupportForward;
- (id)supportMessageMenuTypeList;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
