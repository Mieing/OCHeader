@class AWEIMUser, NSString, NSArray, NSDictionary, AWEURLModel;

@interface AWEIMShareProfileMessage : AWEIMMessage <AWEIMMessageConfigProtocol>

@property (copy, nonatomic) NSString *userDescription;
@property (retain, nonatomic) NSArray *coverURLArray;
@property (retain, nonatomic) NSArray *coverItemsArray;
@property (copy, nonatomic) NSString *uid;
@property (copy, nonatomic) NSString *secUID;
@property (retain, nonatomic) AWEIMUser *user;
@property (copy, nonatomic) NSString *pushDetail;
@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) AWEURLModel *avatarURLModel;
@property (copy, nonatomic) NSDictionary *ecomShareTrackParams;
@property (copy, nonatomic) NSDictionary *lifeShareExt;
@property (copy, nonatomic) NSString *source;
@property (copy, nonatomic) NSString *signature;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)viewModelClass;

- (id)initWithContentDict:(id)a0;
- (BOOL)isAllowedCellEdit;
- (BOOL)isUserCellType;
- (id)getContentDict;
- (id)contentComponentName;
- (BOOL)supportRefactorCell;
- (id)quoteContentComponentName;
- (BOOL)isAllowedEmojiReply;
- (BOOL)shouldShowNicknameWithMessageType;
- (id)hintOnInputVCWhenQuoted;
- (BOOL)isAllowedForward;
- (BOOL)isSupportForward;
- (id)supportMessageMenuTypeList;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
