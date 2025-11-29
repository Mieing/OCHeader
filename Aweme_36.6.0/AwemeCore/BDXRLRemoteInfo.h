@class NSString;

@interface BDXRLRemoteInfo : NSObject

@property (copy, nonatomic) NSString *accessKey;
@property (copy, nonatomic) NSString *channel;
@property (copy, nonatomic) NSString *bundle;
@property (nonatomic) BOOL extractAkByLocalRule;

+ (id)extractPrefixFromUrlString:(id)a0;

- (void).cxx_destruct;
- (BOOL)isValid;

@end
