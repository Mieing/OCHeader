@class NSString;

@interface AWEIMIncentiveChatIdentityQuota : NSObject

@property (nonatomic) int quota;
@property (nonatomic) int usedQuota;
@property (nonatomic) int inviteQuota;
@property (nonatomic) int alreadyInviteQuota;
@property (nonatomic) int newQuota;
@property (nonatomic) long long quotaUpdateTime;
@property (nonatomic) long long identityLastUpdateTime;
@property (copy, nonatomic) NSString *identityID;

- (id)dictionaryRawData;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;

@end
