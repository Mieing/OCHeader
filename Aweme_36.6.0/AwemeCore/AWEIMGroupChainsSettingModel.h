@class NSDictionary;

@interface AWEIMGroupChainsSettingModel : NSObject

@property (copy, nonatomic) NSDictionary *configs;

- (id)getStartChainsUrl;
- (id)getJoinChainsUrl;
- (long long)getChainsExpireTime;
- (BOOL)getChainsSwitch;
- (long long)getFoldMinLimit;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;

@end
