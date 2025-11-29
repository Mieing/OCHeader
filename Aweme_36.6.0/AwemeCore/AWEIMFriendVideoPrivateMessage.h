@class NSString, AWEURLModel;

@interface AWEIMFriendVideoPrivateMessage : AWEIMMessage

@property (copy, nonatomic) NSString *awemeID;
@property (copy, nonatomic) NSString *displayContent;
@property (copy, nonatomic) NSString *defaultContent;
@property (nonatomic) long long version;
@property (retain, nonatomic) AWEURLModel *coverURL;
@property (copy, nonatomic) NSString *replaceTranslate1CN;
@property (copy, nonatomic) NSString *replaceTranslate1EN;
@property (copy, nonatomic) NSString *senderHintCN;
@property (copy, nonatomic) NSString *receiverHintCN;
@property (copy, nonatomic) NSString *senderHintEN;
@property (copy, nonatomic) NSString *receiverHintEN;

+ (id)identifier;

- (id)initWithContentDict:(id)a0;
- (BOOL)isAllowedCellEdit;
- (BOOL)isUserCellType;
- (id)getContentDict;
- (id)contentComponentName;
- (id)calculateAttributedContent;
- (BOOL)supportRefactorCell;
- (BOOL)shouldShowNicknameWithMessageType;
- (id)getSyncedExtDict;
- (void)prepareForConversationHint;
- (id)supportMessageMenuTypeList;
- (void).cxx_destruct;
- (void)addAction;

@end
