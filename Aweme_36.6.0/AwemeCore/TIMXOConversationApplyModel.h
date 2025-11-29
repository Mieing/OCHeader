@class NSString, NSDictionary, NSDate;

@interface TIMXOConversationApplyModel : NSObject <IESIMConversationApplyModelProtocol, NSCoding>

@property (readonly, nonatomic) long long applyID;
@property (readonly, nonatomic) long long userID;
@property (readonly, copy, nonatomic) NSString *secUserID;
@property (readonly, nonatomic) long long conversationShortID;
@property (readonly, nonatomic) int conversationType;
@property (readonly, nonatomic) long long status;
@property (readonly, nonatomic) NSDate *createdAt;
@property (readonly, nonatomic) long long modifyUserID;
@property (readonly, nonatomic) NSDate *modifiedAt;
@property (readonly, copy, nonatomic) NSDictionary *ext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) long long applyID;
@property (readonly, nonatomic) long long userID;
@property (readonly, copy, nonatomic) NSString *secUserID;
@property (readonly, nonatomic) long long conversationShortID;
@property (readonly, nonatomic) long long inviteUserID;
@property (readonly, copy, nonatomic) NSString *secInviteUserID;
@property (readonly, nonatomic) int conversationType;
@property (readonly, nonatomic) long long status;
@property (readonly, nonatomic) NSDate *createdAt;
@property (readonly, nonatomic) long long modifyUserID;
@property (readonly, nonatomic) NSDate *modifiedAt;
@property (readonly, copy, nonatomic) NSString *applyReason;
@property (readonly, copy, nonatomic) NSDictionary *ext;

+ (id)createFromModel:(id)a0;

- (id)initWithApply:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
