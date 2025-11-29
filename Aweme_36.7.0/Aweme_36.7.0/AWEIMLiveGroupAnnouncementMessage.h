@class NSString;

@interface AWEIMLiveGroupAnnouncementMessage : AWEIMMessage <AWEIMMessageConfigProtocol>

@property (nonatomic) long long announcementId;
@property (copy, nonatomic) NSString *content;
@property (nonatomic) long long scheduleTimeInLongLong;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)timestampFromMsg:(id)a0;

- (id)initWithContentDict:(id)a0;
- (BOOL)isAllowedCellEdit;
- (BOOL)isUserCellType;
- (id)getContentDict;
- (id)contentComponentName;
- (BOOL)supportRefactorCell;
- (BOOL)enableBubbleColorWithType:(long long)a0 isQuoteReply:(BOOL)a1;
- (BOOL)shouldShowNicknameWithMessageType;
- (id)supportMessageMenuTypeList;
- (void).cxx_destruct;

@end
