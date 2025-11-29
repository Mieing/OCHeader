@class NSString;

@interface AWEOFGAuthInfo : NSObject

@property (copy, nonatomic) NSString *clientKey;
@property (copy, nonatomic) NSString *pageUrl;
@property (copy, nonatomic) NSString *url;
@property (copy, nonatomic) NSString *signature;
@property (copy, nonatomic) NSString *timestamp;
@property (copy, nonatomic) NSString *nonceStr;

+ (id)modelPropertyBlacklist;
+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;
- (BOOL)isValid;

@end
