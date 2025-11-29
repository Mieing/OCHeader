@class AWEIMIncentiveChatIdentityQuota, NSMutableDictionary;

@interface AWEIMIncentiveChatIdentity : NSObject

@property (retain, nonatomic) AWEIMIncentiveChatIdentityQuota *identityQuota;
@property (retain, nonatomic) NSMutableDictionary *relations;

- (id)initWithDictionary:(id)a0 chatType:(unsigned long long)a1;
- (void).cxx_destruct;

@end
