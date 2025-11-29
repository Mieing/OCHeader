@class NSString, AWEBinding;
@protocol IESIMConversationProtocol;

@interface AWEIMShareBackgroundMessage : AWEIMMessage <AWEIMMessageConfigProtocol>

@property (retain, nonatomic) id<IESIMConversationProtocol> con;
@property (copy, nonatomic) NSString *subjectSubTitle;
@property (copy, nonatomic) NSString *objectSubTitle;
@property (retain) AWEBinding *syncedExtBinding;
@property (copy, nonatomic) NSString *backgroundImageUri;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subTitle;
@property (copy, nonatomic) NSString *oid;
@property (copy, nonatomic) NSString *skey;
@property (nonatomic) BOOL rip;
@property (nonatomic) BOOL isCurrentBg;
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
- (void)didFinishConfig;
- (void)parseObjectSubtitleFromString:(id)a0;
- (id)supportMessageMenuTypeList;
- (void).cxx_destruct;

@end
