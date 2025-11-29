@class NSString, NSDictionary;

@interface AWEIMApplyJoinFansGroupCommonModel : NSObject

@property (nonatomic) long long sourceType;
@property (nonatomic) long long cid;
@property (copy, nonatomic) NSString *ownerID;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *enterMethod;
@property (copy, nonatomic) NSDictionary *invitationExtra;
@property (copy, nonatomic) NSDictionary *bizExtra;
@property (nonatomic) BOOL showEntryLimitPanel;
@property (nonatomic) BOOL immediatelyJoinMessageListVc;
@property (nonatomic) BOOL needFloatMode;

- (void).cxx_destruct;
- (id)init;

@end
