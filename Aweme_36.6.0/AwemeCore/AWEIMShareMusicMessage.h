@class NSString, NSArray, AWEURLModel;

@interface AWEIMShareMusicMessage : AWEIMMessage <AWEIMMessageConfigProtocol>

@property (retain, nonatomic) NSString *title;
@property (nonatomic) long long userCount;
@property (retain, nonatomic) NSArray *coverURLArray;
@property (retain, nonatomic) NSArray *coverItemsArray;
@property (retain, nonatomic) NSString *musicID;
@property (retain, nonatomic) NSString *pushDetail;
@property (retain, nonatomic) AWEURLModel *musicCoverURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithContentDict:(id)a0;
- (BOOL)isAllowedCellEdit;
- (BOOL)isUserCellType;
- (id)getContentDict;
- (id)contentComponentName;
- (BOOL)supportRefactorCell;
- (BOOL)isAllowedEmojiReply;
- (BOOL)shouldShowNicknameWithMessageType;
- (BOOL)isAllowedForward;
- (BOOL)isSupportForward;
- (id)supportMessageMenuTypeList;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
