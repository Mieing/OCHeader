@class NSString, NSDictionary, NSDate;

@interface TIMXConversationApplyModel : MTLModel <TIMXConversationApplyModelProtocol>

@property (nonatomic) long long applyID;
@property (nonatomic) long long userID;
@property (copy, nonatomic) NSString *secUserID;
@property (nonatomic) long long convShortID;
@property (nonatomic) long long inviteUserID;
@property (copy, nonatomic) NSString *secInviteUserID;
@property (nonatomic) int convType;
@property (nonatomic) int applyStatus;
@property (retain, nonatomic) NSDate *createdAt;
@property (nonatomic) long long modifyUserID;
@property (retain, nonatomic) NSDate *modifiedAt;
@property (copy, nonatomic) NSString *applyReason;
@property (copy, nonatomic) NSDictionary *ext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)createFromPBObject:(id)a0;

- (void).cxx_destruct;

@end
