@class NSArray;

@interface IESGurdSettingsResourceConfigCDNFallBack : NSObject

@property (copy, nonatomic) NSArray *domainsArray;
@property (nonatomic) long long maxAttempts;
@property (nonatomic) BOOL shuffle;

+ (id)configWithDictionary:(id)a0;

- (void).cxx_destruct;

@end
