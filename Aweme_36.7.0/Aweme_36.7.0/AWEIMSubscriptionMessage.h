@class NSString, NSArray;

@interface AWEIMSubscriptionMessage : AWEIMMessage <AWEIMMessageConfigProtocol>

@property (copy, nonatomic) NSString *cardId;
@property (nonatomic) long long sendTime;
@property (copy, nonatomic) NSArray *articleList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithContentDict:(id)a0;
- (BOOL)isAllowedCellEdit;
- (id)generateForwardMessage;
- (BOOL)isUserCellType;
- (id)getContentDict;
- (id)contentComponentName;
- (BOOL)supportRefactorCell;
- (BOOL)shouldShowNicknameWithMessageType;
- (BOOL)isAllowedForward;
- (BOOL)isSupportForward;
- (id)supportMessageMenuTypeList;
- (void).cxx_destruct;
- (long long)templateType;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
