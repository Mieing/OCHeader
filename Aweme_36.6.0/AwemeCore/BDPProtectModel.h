@class NSString;

@interface BDPProtectModel : NSObject

@property (copy, nonatomic) NSString *appId;
@property (copy, nonatomic) NSString *expected_version;
@property (nonatomic) long long protectionStrategy;
@property (nonatomic) long long metaCleanStartSec;
@property (nonatomic) long long metaCleanEndSec;

- (void).cxx_destruct;

@end
