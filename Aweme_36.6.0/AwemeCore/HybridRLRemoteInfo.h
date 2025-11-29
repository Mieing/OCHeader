@class NSString;

@interface HybridRLRemoteInfo : NSObject

@property (copy, nonatomic) NSString *accessKey;
@property (copy, nonatomic) NSString *channel;
@property (copy, nonatomic) NSString *bundle;

+ (id)extractPrefixFromUrlString:(id)a0;

- (BOOL)isSetted;
- (void).cxx_destruct;

@end
