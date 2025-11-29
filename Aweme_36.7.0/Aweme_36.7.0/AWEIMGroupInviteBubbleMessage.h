@class NSString;

@interface AWEIMGroupInviteBubbleMessage : AWEIMMessage

@property (copy, nonatomic) NSString *userAvatar;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) long long groupCount;
@property (nonatomic) long long groupMemberCount;
@property (nonatomic) long long userID;

- (long long)aweType;
- (id)initWithContentDict:(id)a0;
- (BOOL)isUserCellType;
- (id)getContentDict;
- (id)contentComponentName;
- (BOOL)supportRefactorCell;
- (id)getSyncedExtDict;
- (id)supportMessageMenuTypeList;
- (long long)messageType;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
